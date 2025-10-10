#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> voice = {"aya", "ye", "woo", "ma"};

    for (string word : babbling) {
        string temp = word;

        // 각 voice를 최초에 발견되는 부분부터 제거
        for (string v : voice) {
            size_t pos = temp.find(v);
            // "v"가 temp에 있으면 모두 ""로 대체
            while (pos != string::npos) {
                temp.replace(pos, v.length(), " ");
                pos = temp.find(v, pos+1);
            }
        }
        // 공백, 아무것도 남지 않았다면 맞는 단어
        temp.erase(remove(temp.begin(), temp.end(), ' '), temp.end());
        if (temp.empty())
            answer++;
    }

    return answer;
}
