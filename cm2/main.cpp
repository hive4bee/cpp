//
// Created by seongjin on 21. 7. 6..
//

#include "my.h"
#include "rectangle.h"
#include <iostream>
using std::cout;
using std::endl;
int main(){
    Person person("SEONGJIN", 26);
    Rectangle rect1("rect1", 10, 10);
    cout << rect1 << endl;
    cout << "이름: " << person.Name() << " / 나이: " << person.Age() << endl;
    return 0;
}