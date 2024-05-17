#include <string>
#include<iostream>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    vector<string> vTemp;
    for(int i=0;i<t.size()-p.size()+1;i++){
        string temp;
        for(int j=0;j<p.size();j++)
        {
            temp+=t[i+j];   
        }
        vTemp.push_back(temp);
    }
    for(int i=0;i<vTemp.size();i++){
        if(vTemp[i]<=p) { 
            answer++;
        }
        cout<<vTemp[i]<<endl;
    }
 
    return answer;
}