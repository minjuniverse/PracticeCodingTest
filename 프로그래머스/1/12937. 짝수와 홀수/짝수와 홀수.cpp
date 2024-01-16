#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    int temp=num%2;
    if(temp==0)
        answer +="Even";    
    else
        answer+="Odd";
    

    return answer;
    
        
    
}