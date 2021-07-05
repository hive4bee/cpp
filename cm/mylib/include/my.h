//
// Created by seongjin on 21. 7. 5..
//

#ifndef MY_H_
#define MY_H_

#include <string>
using std::string;

class Person{
private:
    string name;
    int age;
public:
    Person();
    Person(string nm, int a);
    void Name(string nm);
    string Name();
    void Age(int a);
    int Age();
};

#endif //MY_H_
