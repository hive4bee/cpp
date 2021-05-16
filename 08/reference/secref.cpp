//
// Created by seongjin on 21. 5. 16..
// 참조 변수의 정의와 사용

#include <iostream>
int main(){
    using namespace std;
    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats의 주소 = " << &rats;
    cout << ", rodents의 주소 = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies의 주소 = " << &bunnies;
    cout << ", rodents의 주소 = " << &rodents << endl;
    return 0;
}

