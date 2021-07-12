//
//  main.cpp
//  test
//
//  Created by Hyun Hee Kang on 2021/07/12.
//

//#include <iostream>
//#include <vector>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
////    std::vector<int> vec = {1,2,3,4,5};
////    vec.insert(vec.begin(),0);
////    std::vector<int> vec;
////    vec.push_back(1);
////    vec.push_back(2);
////    vec.insert(vec.begin(),0);
////    vec.insert(find(vec.begin(),vec.end(),1),4);
//    std::vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
//    vec.pop_back();
//    vec.erase(vec.begin());
//    vec.erase(vec.begin()+1,vec.begin() + 4);
//
//    for (auto& i: vec){
//        std::cout<<i<<std::endl;
//    }
//    return 0;
//}

//
//  forward_list_basic.cpp
//  test
//
//  Created by Hyun Hee Kang on 2021/07/13.
//

#include <forward_list>
#include <iostream>

int main(){
//    std::forward_list<int> fwd_list = {1,2,3};
//    fwd_list.push_front(0);
//    auto it = fwd_list.begin();
//    fwd_list.insert_after(it,5);
//    fwd_list.insert_after(it,6);
    std::forward_list<int> fwd_list = {1,2,3,4,5};
    fwd_list.pop_front();
    auto it = fwd_list.begin();
    fwd_list.erase_after(it);
    fwd_list.erase_after(it,fwd_list.end());

    return 0;
}

