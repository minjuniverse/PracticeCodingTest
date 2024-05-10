function solution(num) {
    const prime = [false, false, ...Array(num - 1).fill(true)];

    for (let i = 2; i * i <= num; i += 1) {
        if (prime[i]) {
            for (let j = i * 2; j <= num; j += i) {
                prime[j] = false;
            }
        }
    }
    return prime.filter(Boolean).length;  // 참인 요소들의 개수를 반환합니다.
}