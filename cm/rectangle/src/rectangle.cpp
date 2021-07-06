//
// Created by seongjin on 21. 7. 6..
//

#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(string nm, int w, int h) {
    name = nm;
    width = w;
    height = h;
}
void Rectangle::Name(string nm) {
    name = nm;
}
string Rectangle::Name() {
    return name;
}
void Rectangle::Width(int w){
    width = w;
}
int Rectangle::Width(){
    return width;
}
void Rectangle::Height(int h){
    height = h;
}
int Rectangle::Height(){
    return height;
}
std::ostream &operator<<(std::ostream &os, const Rectangle &rec){
    os << "명칭: " << rec.name << " / 넓이: " << rec.width << " / 높이: " << rec.height << std::endl;
    return os;
}


