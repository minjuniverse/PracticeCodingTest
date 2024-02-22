#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    bool check=false;
    sort(arr.begin(),arr.end(),less<int>());
    for(int i=0;i<arr.size();i++){
        if(arr[i]%divisor==0){
            answer.push_back(arr[i]);
            check=true;
        }
            
            
    }
    if(check==false) answer.push_back(-1);
    return answer;
}