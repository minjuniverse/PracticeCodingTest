function solution(quiz) {
    var answer = [];
    for(var i = 0; i < quiz.length; i++){
        var list = quiz[i].split(" ")
        var result = list[list.length-1]
        var val = Number(list[0])
        for(var k = 1; k < list.length; k +=2){
            if(list[k] == "-"){
                val -= Number(list[k+1])
            }else if(list[k] == "+"){
                val += Number(list[k+1])
            }
        }val == result ? answer.push("O") : answer.push("X")
    }return answer;
}