#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s=to_string(n);
    
    for(int i=s.size()-1;i>-1;i--)
    {
        answer.push_back(s[i]-'0');
    }
    return answer;
}