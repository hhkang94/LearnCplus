//
//  완전제곱수.cpp
//  Basic
//
//  Created by Hyun Hee Kang on 2021/07/19.
//

#include <stdio.h>
#include <iostream>

int main(){
//    int M = 60;
//    int N = 100;
    int M, N;
    std::cin>>M;
    std::cin>>N;
    
    int sum_square_num = 0;
    int min_square_num = 0;
    
    for (int i = 1;i <= 100; i++){
        if (i*i >= M && i*i <= N){
            if (sum_square_num == 0) min_square_num = i*i;
            sum_square_num += i*i;
        }
    }
    
    if (sum_square_num > 0){
        std::cout<<sum_square_num<<std::endl;
        std::cout<<min_square_num<<std::endl;
    } else{
        std::cout<<-1<<std::endl;
    }
    
    return 0;
}
