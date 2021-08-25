//
// Created by seongjin on 21. 8. 26..
//

#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;

    cout << "오늘의 수온: ";
    cout.setf(ios_base::showpos);
    cout << temperature << endl;

    cout << "프로그래머들에게 그 값은\n";
    cout << std::hex << temperature << endl;//16진법
    cout.setf(ios_base::uppercase);//16진 출력에 대문자 사용
    cout.setf(ios_base::showbase);//16진 출력에 0X 사용
    cout << "또는\n";
    cout << temperature << endl;
    cout << true << "!의 값은";
    cout.setf(ios_base::boolalpha);
    cout << true << "이다.\n";

    return 0;
}