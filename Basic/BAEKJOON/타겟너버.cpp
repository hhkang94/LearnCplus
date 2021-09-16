#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

void dfs (vector<int> s, int &target, int &answer, int cur){
    if (s.empty()){
        if (cur == target) answer++;
        return;
    }

    int p = cur + s.back();
    int n = cur - s.back();
    s.pop_back();
    dfs(s, target, answer, p);
    dfs(s, target, answer, n);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    dfs(numbers, target, answer, 0);
    
    cout<<answer<<"\n";
    return answer;
}

int main(){
    vector<int> numbers = {1,1,1,1,1};
    int target = 3;
    solution(numbers, target);
    return 0;
}