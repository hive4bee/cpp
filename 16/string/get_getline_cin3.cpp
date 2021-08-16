//
// Created by seongjin on 21. 8. 16..
//

#include <iostream>
#include <string>

int main(){
    char info[100];
    std::string stuff;
    std::cin.getline(info, 100, ':');//:까지 읽고, :은 내버린다.
    std::cout << "cin.getline(info, 100, ':'): " << info << std::endl;
    getline(std::cin, stuff, ':');//:까지 읽고, :은 내버린다.
    std::cout << "getline(std::cin, stuff, ':'): " << stuff << std::endl;

    return 0;
}