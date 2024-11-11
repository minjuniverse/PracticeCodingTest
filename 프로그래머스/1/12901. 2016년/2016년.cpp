#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector <string> todays={"FRI","SAT", "SUN","MON","TUE","WED","THU","null"};
    vector <int> daysInMonth={31,29,31,30,31,30,31,31,30,31,30,31};
    int totalDays=0;
    for(int i=0;i<a-1;i++){
        totalDays+=daysInMonth[i];
    }
    totalDays+=b-1;
    int getToday=totalDays%7;
    
    return todays[getToday];

}