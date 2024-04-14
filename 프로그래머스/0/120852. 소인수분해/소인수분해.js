function solution(n) {
    let factors = [];
    for (let i = 2; i <= n; i++) {
        while (n % i === 0) {
            factors.push(i);
            n /= i;
        }
    }
    return factors.filter((value, index, self) => {
        return self.indexOf(value) === index;
    });
}