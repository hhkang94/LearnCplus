#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_map <string, int> hm;

    for (auto x: phone_book){
        hm[x] = 1;
    }

    for (int i = 0; i < phone_book.size(); i++){
        string p = phone_book[i];
        for (int j = 1; j < p.length();j++){
            if (hm[p.substr(0,j)] && p.substr(0,j) != p) return false;
        }
    }

    return answer;
}