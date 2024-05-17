function solution(t, p) {
    let answer = 0;
    let vTemp = [];
    for (let i = 0; i <= t.length - p.length; i++) {
        let temp = "";
        for (let j = 0; j < p.length; j++) {
            temp += t[i + j];
        }
        vTemp.push(temp);
    }
    for (let i = 0; i < vTemp.length; i++) {
        if (vTemp[i] <= p) {
            answer++;
            console.log(vTemp[i]);
        }
    }
    return answer;
}