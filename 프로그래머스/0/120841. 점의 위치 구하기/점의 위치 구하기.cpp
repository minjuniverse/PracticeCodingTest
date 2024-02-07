#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    if(0<dot[0])//x가 0보다 클경우
        if(0<dot[1])//y가 0보다 크면
            return 1;
        else
            return 4;
    else
        if(0<dot[1])
            return 2;
        else
            return 3;
    
}