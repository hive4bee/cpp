//
// Created by seongjin on 21. 8. 29..
//

#include <iostream>
#include <sstream>
#include <string>

int main(){
    using namespace std;
    string lit = "길섶 민들레 꽃씨대롱 방울로 부풀어 여윈 목 아프게 뺴어 들고 아가씨 실어 나를 바람 기다리누나.";
    istringstream instr(lit);
    string word;
    while(instr >> word){
        cout << word << endl;
    }
    return 0;
}