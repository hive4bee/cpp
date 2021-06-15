//
// Created by seongjin on 21. 6. 14..
//

#include <iostream>
#include "mytime1.h"

int main(){
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.show();
    cout << endl;

    cout << "coding time = ";
    coding.show();
    cout << endl;

    cout << "fixing time = ";
    fixing.show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.show();
    cout << endl;
    total = morefixing.operator+(total);
    //함수 표기
    cout << "morefixing.operator+(total) = ";
    total.show();
    cout << endl;

    return 0;
}