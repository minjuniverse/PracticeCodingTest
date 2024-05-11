function solution(s) {
    var answer = new Array(52).fill(0);// A-Z, a-z

    for (var i = 0; i < s.length; i++) {
        let charCode = s.charCodeAt(i);
        if (charCode >= 65 && charCode <= 90) //데믄지
        {
            answer[charCode - 65]++;
        } 
        else if (charCode >= 97 && charCode <= 122) //소문자
        {
            answer[charCode - 71]++;
        }
    }

    return answer;
}