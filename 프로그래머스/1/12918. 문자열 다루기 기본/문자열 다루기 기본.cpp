#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    
    if(4==s.size() || s.size()==6){
        for(int i=0;i<=s.size();i++)
        {
            if(isalpha(s[i])){
                return false;
            }
        }
    } else { return false;}
    
    return answer;
}