#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    for(int i=0;i<score.size();i++){
        if(temp.empty()){
            temp.push_back(score[i]);
            answer.push_back(score[i]);
        }
        else 
        {
            temp.push_back(score[i]);
            sort(temp.begin(),temp.end(),greater<int>());
            if(temp.size()==k+1)
            {
                temp.pop_back();
                //temp.erase(temp.begin()+k-1,temp.begin()+k);
                answer.push_back(temp[k-1]);
            }
            else
            {
                answer.push_back(temp[i]);  
            }
            
            
        }
    }
    //sor
    return answer;
}