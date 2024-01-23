#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    // 배열이 하나인 경우 -1을 추가하고 반환
    if(arr.size() == 1){
        answer.push_back(-1);
        return answer;
    }
        
    // minValue, minIndex 초기화
    int minValue = arr[0];
    int minIndex = 0;

    // 최소값과 인덱스 찾기
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }
 
    // 최소값 제거
    arr.erase(arr.begin() + minIndex);

    // 수정된 배열 반환
    return arr;
}