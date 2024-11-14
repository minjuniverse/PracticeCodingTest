#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string temp = "";
    
    for (int i = 0; i < numbers.size(); i++) {
        temp += numbers[i];  // 현재 문자를 temp에 추가
        
        for (int j = 0; j < number.size(); j++) {
            if (temp == number[j]) {  // temp가 숫자 이름과 일치하면
                answer = answer * 10 + j;  // 숫자로 변환하여 answer에 추가
                temp.clear();  // temp 초기화
                break;  // 일치하는 숫자를 찾았으므로 내부 루프 종료
            }
        }
    }
    
    return answer;
}