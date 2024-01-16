#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(n==1){
        return 4;
    }
    for(long long i=1;i<n/2;i++){
        if(i*i==n){
            answer=i+1;
            return answer*answer;
        }
    }
    return -1;
}