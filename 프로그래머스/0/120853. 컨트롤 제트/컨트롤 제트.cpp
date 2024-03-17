#include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string temp;
    stack<string> tack;
    while (ss >> temp) {
        if (temp == "Z") {
            if (!tack.empty()) {
                tack.pop();
            }
        } else {
            tack.push(temp);
        }
    }
    while (!tack.empty()) {
        answer += stoi(tack.top());
        tack.pop();
    }
    return answer;
}