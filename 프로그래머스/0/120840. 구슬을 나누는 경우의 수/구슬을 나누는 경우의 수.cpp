#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    __int128 answer = 0;
    // n 팩도리얼 구하고
    __int128 n=1;
    for(int i=balls;0<i;--i){
        n*=i;
    }
    //(n-m)!구하기
    __int128 n_m=1;
    for(int j=balls-share;0<j;--j){
        n_m*=j;
    }
    __int128 m=1;
    //m 구하기
    for(int z=share;0<z;z--){
        m*=z;
    }
    answer=n/((n_m)*m);
    return answer;
}