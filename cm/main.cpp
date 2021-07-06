//
// Created by seongjin on 21. 7. 5..
//

#include <iostream>
#include "my.h"
using std::cout;
using std::endl;
int main(){
    cout << "hi" << endl;
    Person person1("hi", 80);
    cout << person1.Age() << endl;
    Person person("SEONGJIN", 28);
    cout << "이름: " << person.Name() << " / 나이: " << person.Age() << endl;
    return 0;
}