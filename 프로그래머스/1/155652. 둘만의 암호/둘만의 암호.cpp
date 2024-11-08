#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector <char> alpha;
    
    // 'a'부터 'z'까지 알파벳 벡터에 추가
    for (char c = 'a'; c <= 'z'; c++) {
        alpha.push_back(c);
    }

    // skip에 있는 문자 제거
    for (int i = 0; i < skip.size(); i++) {
        // alpha 벡터에서 skip[j]에 해당하는 문자를 찾고 삭제
        auto it = find(alpha.begin(), alpha.end(), skip[i]);
        if (it != alpha.end()) {
            alpha.erase(it);
        }
    }

    // s 문자열에서 각 문자를 index만큼 이동시키기
    for (int i = 0; i < s.size(); i++) {
        // 현재 문자가 알파벳이 아닌 경우 그대로 answer에 추가
        if (isalpha(s[i])) {
            // 알파벳을 찾아 index만큼 이동한 문자를 찾기
            auto it = find(alpha.begin(), alpha.end(), s[i]);
            if (it != alpha.end()) {
                // 알파벳을 index만큼 이동
                int new_pos = (it - alpha.begin() + index) % alpha.size();
                answer += alpha[new_pos];
            }
        } else {
            // 알파벳이 아닌 문자는 그대로 answer에 추가
            answer += s[i];
        }
    }

    return answer;
}