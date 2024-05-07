function solution(s){
    var answer = true;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    const stack = [];
    for (var i=0; i<s.length;i++){
        if(s[i]=='(')
        {
            stack.push(s[i]);
        }
        if(s[i]==')')
        {           
            if(stack.length===0){
                return false;
            }
            stack.pop();      
        }
    }
    if(stack.length===0) //자바스크립트에서는 stack.empty() 같은걸 수용할 수 없다.
        return true;
    else
        return false;
    
}