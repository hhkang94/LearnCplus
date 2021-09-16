#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);
    vector<int> s;
    vector<int> t;
    for (int i = 0; i < prices.size(); i++){
        if (s.empty()){ s.push_back(prices[i]); t.push_back(i); cout<<"0"<<"\n";}
        else if (s.back() <= prices[i]){s.push_back(prices[i]); t.push_back(i); cout<<"1"<<"\n";}
        else{
            while(s.back() > prices[i]){
                cout<<"2"<<"\n";
                answer[t.back()] = i - t.back();
                s.pop_back();
                t.pop_back();
            }
            s.push_back(prices[i]);
            t.push_back(i);
        }
    }

    while(!s.empty()){
        cout<<"3"<<"\n";
        answer[t.back()] = prices.size() -1 -t.back();
        s.pop_back();
        t.pop_back();
    }

    for(auto x: answer) cout<<x<<"\t";
    return answer;
}

int main(){
    vector<int> prices = {1,2,3,2,3};
    solution(prices);
    return 0;
}