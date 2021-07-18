//
//  forward_list_practice.cpp
//  Basic
//
//  Created by Hyun Hee Kang on 2021/07/13.
//

//
//  forward_list_practice.cpp
//  basic
//
//  Created by Hyun Hee Kang on 2021/07/13.
//

#include <string>
#include <iostream>
#include <forward_list>

struct citizen
{
    std::string name;
    int age;
};

std::ostream &operator<<(std::ostream &os, const citizen &c)
{
    return (os << "[" << c.name << "," << c.age <<"]");
}

int main()
{
    std::forward_list<citizen> citizens = {
        {"Kim", 22}, {"Lee", 25}, {"Park", 18}, {"Jin", 16}
    };
    
    auto citizens_copy = citizens; // deep copy
    
    std::cout<<"전체 시민들: ";
    for (const auto &c : citizens)
        std::cout <<c<< " ";
    std::cout << std::endl;
    
    citizens.remove_if([](const citizen &c) {
//        나이가 19세보다 작으면 리스트에서 제거
        return (c.age < 19);
    });
    
    std::cout << "투표권이 있는 시민들: ";
    for (const auto &c : citizens)
        std::cout << c << " ";
    std::cout << std::endl;
    
    citizens_copy.remove_if([](const citizen &c) {
        return (c.age != 18);
    });
    
    std::cout<<"내년에 투표권이 생기는 시민들: ";
    for (const auto &c :citizens_copy)
        std::cout<< c << " ";
    std::cout << std::endl;
}

//struct, ostream, lambda expression, reference
