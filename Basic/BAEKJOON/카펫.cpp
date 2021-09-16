#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int max = brown >= yellow ? brown : yellow;
    for (int i = 3; i < max; i++){
        if(sum % i == 0){
            cout<<(i-2) * (sum/i-2)<<"\n";
            if((i-2) * (sum/i-2) == yellow){
                cout<<i<<"\n";
                if (i > sum/i){answer.push_back(i); answer.push_back(sum/i);}
                else {answer.push_back(sum/i); answer.push_back(i);}
                break;
            }
        }
    }
    return answer;
}

int main(){
    int brown = 10;
    int yellow = 2;
    solution(brown, yellow);
    return 0;
}