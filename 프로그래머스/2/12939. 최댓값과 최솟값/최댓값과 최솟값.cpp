#include <string>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    
    int num=0;
    stringstream ss(s);
    vector <int>numbers;
    
    while (ss>>num){
        numbers.push_back(num);
    }
    
    int min=numbers[0];
    int max=numbers[0];
    
    for(int i =1;i<numbers.size();i++){
        if(min>numbers[i]){
            min=numbers[i];
        }
        if(max<numbers[i]){
            max=numbers[i];
        }
    }

    return to_string(min) + " " + to_string(max);
       
        
  
    
    
    
  
}