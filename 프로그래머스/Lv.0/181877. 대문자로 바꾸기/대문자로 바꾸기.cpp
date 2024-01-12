#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i=0;i<myString.size();i++){
        if(islower(answer[i])){
            answer[i]=toupper(answer[i]);
        }
    }
    return answer;
}