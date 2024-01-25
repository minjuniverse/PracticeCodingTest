#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i = 0; i < quiz.size(); i++) {
        string temp = quiz[i];
        stringstream ss(temp);
        int firstNum = 0;
        int secondNum = 0;
        int answerNum = 0;
        string sms;
        string sign;

        // 수식 파싱
        ss >> firstNum >> sign >> secondNum >> sms>> answerNum;
        
        // 남아 있는 문자열 처리
        ss.clear();

        // 결과 평가
        if(sign == "+"){
            int result = firstNum + secondNum;
            if(result == answerNum)
                answer.push_back("O");
            else
                answer.push_back("X");
        } else {
            int result = firstNum - secondNum;
            if(result == answerNum)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }
    return answer;
}