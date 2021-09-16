#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> d(progresses.size(), 0);

    for (int i = progresses.size() -1; i >= 0 ; i--){
        d[i] = (100 - progresses[i])/speed[i];
    }
    return answer;
}