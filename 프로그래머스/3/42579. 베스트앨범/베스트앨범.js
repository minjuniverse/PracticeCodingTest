function solution(genres, plays) {
    const genreMap = new Map();

    // 장르별로 총 재생 횟수와 각 노래 정보를 맵에 저장
    genres.forEach((genre, index) => {
        if (!genreMap.has(genre)) {
            genreMap.set(genre, { total: 0, songs: [] });
        }
        const genreData = genreMap.get(genre);
        genreData.total += plays[index];
        genreData.songs.push({ id: index, plays: plays[index] });
    });

    // 각 장르별 노래를 재생 횟수와 고유번호를 기준으로 정렬
    genreMap.forEach((value, key) => {
        value.songs.sort((a, b) => {
            if (a.plays === b.plays) {
                return a.id - b.id;
            }
            return b.plays - a.plays;
        });
    });

    // 모든 장르를 재생 횟수를 기준으로 내림차순 정렬
    const sortedGenres = Array.from(genreMap.entries()).sort((a, b) => {
        return b[1].total - a[1].total;
    });

    // 장르별로 최대 두 개의 노래 고유 번호 선택
    const answer = [];
    sortedGenres.forEach(([genre, data]) => {
        answer.push(...data.songs.slice(0, 2).map(song => song.id));
    });

    return answer;
}
