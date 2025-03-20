#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    
    for (const auto& dir : keyinput) {
        if (dir == "left") {
            answer[0] -= 1;
            answer[0] = max(answer[0], -board[0] / 2);
        }
        else if (dir == "right") {
            answer[0] += 1;
            answer[0] = min(answer[0], board[0] / 2);
        }
        else if (dir == "up") {
            answer[1] += 1;
            answer[1] = min(answer[1], board[1] / 2);
        }
        else if (dir == "down") {
            answer[1] -= 1;
            answer[1] = max(answer[1], -board[1] / 2);
        }
    }
    
    return answer;
}
