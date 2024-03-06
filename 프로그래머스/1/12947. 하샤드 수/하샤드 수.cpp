#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sumNum=0;
    int temp =x;
    if (x <= 0) return false;
    while (temp > 0) {
        sumNum += temp % 10;
        temp /= 10;
    }

    
    if(x%sumNum==0) return true;
    else            return false;
    
   // return answer;
}