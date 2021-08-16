//
// Created by seongjin on 21. 8. 16..
//

#include <iostream>
#include <string>

int main(){
    char info[100];
    std::cin >> info; //한 단어를 읽는다.
    std::cout << "cin>>info: " << info << std::endl;

    while(std::cin.get() != '\n'){
        continue;
    }

    std::cin.getline(info, 100);//한 행을 읽되, \n은 내버림

    std::cout << "cin.getline(info, 100): " << info << std::endl;
    std::cin.get(info, 100);//한 행을 읽되, \n을 큐에 남겨 둔다.
    std::cout << "cin.get(info, 100): " << info << std::endl;
    while(std::cin.get() != '\n'){
        continue;
    }
    std::cin.get(info, 100);

    return 0;
}