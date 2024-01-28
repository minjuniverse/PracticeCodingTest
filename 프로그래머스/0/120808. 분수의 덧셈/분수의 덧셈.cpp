#include <string>
#include <vector>

using namespace std;
// 최대공약수(GCD)를 계산하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 분수를 더하고 기약 분수로 만드는 함수
std::vector<int> addFractions(int numer1, int denom1, int numer2, int denom2) {
    // 두 분수의 합
    int resultNumer = numer1 * denom2 + numer2 * denom1;
    int resultDenom = denom1 * denom2;

    // 최대공약수 계산
    int commonFactor = gcd(resultNumer, resultDenom);

    // 기약 분수로 만들기
    resultNumer /= commonFactor;
    resultDenom /= commonFactor;

    // 결과 반환
    return {resultNumer, resultDenom};
}

std::vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    // 두 분수 더하기
    return addFractions(numer1, denom1, numer2, denom2);
}