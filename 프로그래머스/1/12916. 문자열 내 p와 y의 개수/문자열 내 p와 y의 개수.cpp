#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int numOfP=0;
    int numOfY=0;
    string temp=s;
    for(int i =0; i<temp.size()+1;i++){
        if(isupper(temp[i]))
        {
            temp[i]=tolower(temp[i]);    
        }
        if(temp[i]=='p') 
            numOfP++;
        else if(temp[i]=='y')
            numOfY++;
    }
    
    if(numOfP==numOfY)
        return true;
    else 
        return false;
        
    
    
    

    
}