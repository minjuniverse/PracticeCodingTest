#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a) {  // n이 a보다 클 동안 계속 반복
        int newBottles = (n / a) * b;  // 받을 수 있는 새로운 콜라 병 수
        answer += newBottles;  // 새로운 병 수를 누적
        n = newBottles + (n % a);  // 남은 병과 새로 받은 병을 합쳐서 n 갱신
        
    }

    return answer;
}
