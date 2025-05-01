#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, int> genreTotal;
    unordered_map<string, vector<pair<int, int>>> genreSongs;

    for (int i = 0; i < genres.size(); i++) {
        genreTotal[genres[i]] += plays[i];
        genreSongs[genres[i]].emplace_back(plays[i], i);
    }

    vector<pair<string, int>> sortedGenres(genreTotal.begin(), genreTotal.end());
    sort(sortedGenres.begin(), sortedGenres.end(), [](auto& a, auto& b) {
        return a.second > b.second;
    });

    vector<int> answer;

    for (auto& [genre, _] : sortedGenres) {
        auto& songs = genreSongs[genre];

        sort(songs.begin(), songs.end(), [](auto& a, auto& b) {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });

        for (int i = 0; i < songs.size() && i < 2; i++) {
            answer.push_back(songs[i].second);
        }
    }
    return answer;
}
