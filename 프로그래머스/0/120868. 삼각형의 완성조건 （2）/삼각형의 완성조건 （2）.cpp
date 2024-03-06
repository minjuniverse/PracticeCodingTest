#include <string>
#include <vector>
#include<algorithm>


using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(),sides.end(),greater<>());
    int sumTwo=sides[0]+sides[1];
    answer+=sumTwo-sides[0]-1;
    answer+=sides[0]-(sides[0]-sides[1]);
    return answer;
}