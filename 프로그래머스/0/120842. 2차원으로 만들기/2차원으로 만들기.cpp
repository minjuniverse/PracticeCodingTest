#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> answer1;
    int flag=0;
    for(int i =0;i<num_list.size();i++){
        answer1.push_back(num_list[i]);
        flag++;
        if(flag==n) {
            answer.push_back(answer1);
            answer1.clear();
            flag=0;
        }
    }
    return answer;
}