#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    for(int i=0;i<num_list.size();i++){
        string tempstring=to_string(num_list[i]);
        int temp=stoi(tempstring);
        if(temp==n)
            return 1;
    }
    return 0;
}