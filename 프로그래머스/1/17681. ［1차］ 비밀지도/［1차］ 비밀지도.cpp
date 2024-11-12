#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < n; ++i) {
        // arr1[i]와 arr2[i]의 비트 OR 연산을 통해 합친 지도 만들기
        int combined = arr1[i] | arr2[i];
        
        string row = "";
        
        // 각 비트에 대해 검사해서 '#' 또는 ' ' 추가
        for (int j = 0; j < n; ++j) {
            // 가장 왼쪽 비트부터 검사하기 위해 비트 시프트 연산
            if (combined & (1 << (n - j - 1))) {
                row += '#';  // 벽
            } else {
                row += ' ';  // 공백
            }
        }
        
        // 생성한 행을 결과에 추가
        answer.push_back(row);
    }

    return answer;
}