function solution(s) {
    let numOfP = 0;
    let numOfY = 0;
    let temp = s.toLowerCase();

    for (let i = 0; i < temp.length; i++) {
        if (temp[i] === 'p') {
            numOfP++;
        } else if (temp[i] === 'y') {
            numOfY++;
        }
    }

    return numOfP === numOfY;
}

