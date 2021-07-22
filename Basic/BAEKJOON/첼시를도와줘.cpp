//
//  첼시를도와줘.cpp
//  Basic
//
//  Created by Hyun Hee Kang on 2021/07/22.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
// get "number of test", n as first input
    int n;
    cin>>n;
    int p; // number of players to be considered
    int max_value;
    string max_name;
    int value;
    string name;

//    iterate test n times
    for (int i = 0; i < n; i++){
        cin>>p;
        max_value = 0;
        for (int ii = 0; ii < p; ii++){
            cin>>value;
            cin>>name;
            if (value > max_value){
                max_value = value;
                max_name = name;
            }
        }
        cout<<max_name<<endl;
        
    }
    
    return 0;
}

//데이터 입력

//int test1;
//string mystr;
////    getline (cin, mystr);
//cin >> test1;
//cin >> mystr;
//cout << test1 << endl;
//cout << mystr << endl;
