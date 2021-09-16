#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int i, j, k;
    vector<int> part;
    for (int n = 0; n < commands.size(); n++){
        i = commands[n][0];
        j = commands[n][1];
        k = commands[n][2];

        if (!part.empty()) part.clear();
        for (int l = i -1 ; l < j; l++) part.push_back(array[l]);
        sort(part.begin(),part.end(),less<int>());
        answer.push_back(part[k-1]);     
    }

    return answer;
}