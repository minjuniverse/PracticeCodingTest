#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;  // long long으로 선언
    int answer = 0;

    if (n == 1) {
        return 0; 
    }

    while (n != 1 && answer < 500) {
        if (n % 2 == 0) {           // 짝수라면
            n /= 2;
        } else {                    // 홀수라면
            n = (n * 3) + 1;
        }
        answer++;                   // 카운트 증가
    }

    
    return (n == 1) ? answer : -1;
}
