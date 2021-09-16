#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int h = 0;
    sort(citations.begin(),citations.end(),less<int>());
    vector<int> c;
    for (int i = citations.size()-1; i >= 0;i--){
        if (citations[i] >= citations.size() - i && citations[i-1] <= citations.size() - i && citations.size() - i >= i+1){
            h = citations.size() - i;
            break;
        }
    }

    return h;
}