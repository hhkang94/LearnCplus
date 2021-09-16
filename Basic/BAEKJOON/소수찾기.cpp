#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <iostream>

using namespace std;



int solution(string numbers) {
    bool isPrime;
    int x; int l = numbers.length();
    unordered_set<int> s;

    sort(numbers.begin(), numbers.end());
    do{
        for(int i = 1; i < l+1; i++){
            isPrime = true;
            x = stoi(numbers.substr(0,i));
            if(x == 0 || x == 1) {isPrime = false;}
            else{
                for (int j = 2; j < x; j++){
                if (x % j == 0) isPrime = false;
                } 
            }           
            if (isPrime) {s.insert(x); cout<<x<<"\n";}
        }

    } while(next_permutation(numbers.begin(),numbers.end()));


    return s.size();
}

int main(){
    string test = "011";
    int answer = solution(test);
    cout<<answer<<"\n";

    return 0;
}