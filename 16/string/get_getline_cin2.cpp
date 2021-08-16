//
// Created by seongjin on 21. 8. 16..
//

#include <iostream>
#include <string>

int main(){
    std::string stuff;
    std::cin >> stuff;// 한 단어를 읽는다.
    std::cout << "cin>>stuff: " << stuff << std::endl;

    while(std::cin.get() != '\n'){
        continue;
    }
    getline(std::cin, stuff);//한 행을 읽되, \n은 내버린다.
    std::cout << "getline(cin, stuff): " << stuff << std::endl;

    return 0;
}