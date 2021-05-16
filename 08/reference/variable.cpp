//
// Created by seongjin on 21. 5. 16..
// 참조변수의 정의와 사용

#include <iostream>
int main(){
    using namespace std;
    int rats = 101;
    int & rodents = rats;//여기서 &는 주소 연산자가 아니라, 데이터형 식별자의 일부로 사용된 것이다. int에 대한 참조

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    //어떤 시스템에서는 다음 주소들을 unsigned형으로 변환해 주어야 한다.
    cout << "rats의 주소 = " << &rats;
    cout << ", rodents의 주소 = " << &rodents << endl;
    return 0;
}