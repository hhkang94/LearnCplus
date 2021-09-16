#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string, int> s;
    
    for (auto& x: clothes) s[x[1]]++;
    int comb = 1;
    for (auto& n: s) comb *= n.second+1;
    answer = comb - 1;
    // vector<int> c(s.size(), 0);
    // int n = 0;
    // for (auto& x: s){
    //     c[n] = x.second;
    //     n++;
    // }
        
    // int comb;
    // for (int j = 0; j < n; j++){
    //     comb = 1;
    //     for (int k = j; k < n; k++){
    //         comb *= c[k];
    //         answer += comb;
    //     }

    // }

    return answer;
}