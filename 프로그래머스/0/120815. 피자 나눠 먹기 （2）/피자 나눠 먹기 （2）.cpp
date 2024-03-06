#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i=1;
    while((6*i)%n!=0){
        answer++;
        i++;
    }
    answer++;
    return answer;
}


