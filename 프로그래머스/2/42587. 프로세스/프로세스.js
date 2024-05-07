function solution(priorities, location) {
    let queue = priorities.map((priority, index) => ({
        index: index, // 원래 위치를 추적하기 위한 인덱스
        priority: priority // 우선순위
    }));
    let order = 0; // 실행 순서

    while (true) {
        let current = queue.shift(); // 큐의 첫 번째 원소를 꺼냄
        // 꺼낸 원소보다 높은 우선순위를 가진 원소가 큐에 존재하는지 확인
        if (queue.some(item => item.priority > current.priority)) {
            // 존재한다면 꺼낸 원소를 큐의 뒤로 다시 삽입
            queue.push(current);
        } else {
            // 존재하지 않는다면 이 원소를 실행
            order++;
            // 꺼낸 원소의 인덱스가 찾고자 하는 위치와 동일한지 확인
            if (current.index === location) {
                return order; // 찾고자 하는 원소의 실행 순서 반환
            }
        }
    }
}
