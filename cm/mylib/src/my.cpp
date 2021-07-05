//
// Created by seongjin on 21. 7. 5..
//

#include "my.h"
#include <iostream>

Person::Person(string nm, int a){
    name = nm;
    age = a;
}

void Person::Name(string nm){
    name = nm;
}
string Person::Name(){
    return name;
}
void Person::Age(int a){
    age = a;
}
int Person::Age(){
    return age;
}