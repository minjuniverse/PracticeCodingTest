#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size()==1){
        answer.push_back(-1);
        return answer;
    }
        
    int minValue=arr[0];
    int minIndex=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<minValue)
        {
            minValue=arr[i];
            minIndex=i;
        }
           
    }
 
    
    arr.erase(arr.begin()+minIndex);
    //for(int i=0;i<arr.size();i++){
      //  answer.push_back(arr[i]);
    //}
    return arr;
}