//
// Created by seongjin on 21. 7. 6..
//

#include "station.h"
#include <iostream>

Station::Station(string nm, int num) {
    name = nm;
    number = num;
}
void Station::Name(string nm) {
    name = nm;
}
string Station::Name(){
    return name;
}
void Station::Number(int num){
    number = num;
}
int Station::Number() const{
    return number;
}


