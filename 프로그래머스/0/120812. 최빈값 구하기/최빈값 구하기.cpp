#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> frequencyMap;

    // 배열을 순회하며 각 값의 등장 횟수를 기록
    for (int num : array) {
        frequencyMap[num]++;
    }

    int maxFrequency = 0; // 최빈값의 등장 횟수
    int mode = -1;        // 최빈값

    // 맵을 순회하며 최빈값 찾기
    for (const auto& entry : frequencyMap) {
        int currentFrequency = entry.second;
        if (currentFrequency > maxFrequency) {
            maxFrequency = currentFrequency;
            mode = entry.first;
        } else if (currentFrequency == maxFrequency) {
            // 최빈값이 여러 개일 경우 -1 반환
            mode = -1;
        }
    }

    return mode;
}