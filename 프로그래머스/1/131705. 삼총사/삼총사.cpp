#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int sum=0;
    for(int i=0;i<number.size();i++){
        for(int j=i+1;j<number.size();j++){
            for(int z=j+1;z<number.size();z++){
                sum=number[i]+number[j]+number[z];
                if(sum==0) {
                    answer++;
                    sum=0;
                }   
            }
        }
    }
    return answer;
}