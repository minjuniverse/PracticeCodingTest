#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
   int lux = 1000, luy = 1000;
int rdx = -1, rdy = -1;
    //왼쪽 위는 기존보다 작다면
    //오른 위는 기존보다 크다면
    //완쪽 아래는 기존보다 
    for(int i=0;i<wallpaper.size();i++){
        
        string temp = wallpaper[i];
        for(int j=0;j<=temp.size();j++){
            if(temp[j]=='#'){
                if(lux>i) lux=i;
                if(luy>j) luy=j;//요것도 정답
                if(rdx<i) rdx=i;
                
                if(rdy<j) rdy=j; //요건 정답
                //if (rdy < j + 1) rdy = j + 1;
            }
        }
        temp.clear();
    }
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx+1);
    answer.push_back(rdy+1);
    return answer;
}