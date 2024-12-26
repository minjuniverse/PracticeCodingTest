#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s)
{
    stack<char> leftStack;
    for(int i =0;i<s.size();i++){
        if(s[i]=='('){
            leftStack.push('(');
        } else if(s[i]==')'){
            if(leftStack.empty()) return false;
            else
                leftStack.pop();
        }
    }
    if(leftStack.empty()) return true;
    else return false;
    
}