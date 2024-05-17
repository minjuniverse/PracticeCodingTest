#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int n, int k, vector<int> enemy) {
    int answer = 0;
    priority_queue<int> max_heap;

    for (int i = 0; i < enemy.size(); ++i) {
        if (n >= enemy[i]) {
            n -= enemy[i];
            max_heap.push(enemy[i]);
            answer++;
        } else {
            if (k > 0) {
                if (!max_heap.empty() && max_heap.top() > enemy[i]) {
                    n += max_heap.top();
                    max_heap.pop();
                    max_heap.push(enemy[i]);
                    n -= enemy[i];
                }
                k--;
                answer++;
            } else {
                break;
            }
        }
    }

    return answer;
}