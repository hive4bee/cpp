//
// Created by seongjin on 21. 7. 6..
//

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include <string>
using std::string;

class Rectangle{
private:
    string name;
    int width;
    int height;
public:
    Rectangle(string nm, int w, int h);
    void Name(string nm);
    string Name();
    void Width(int w);
    int Width();
    void Height(int h);
    int Height();

    friend std::ostream & operator<<(std::ostream &os, const Rectangle &rec);

};

#endif //TRAIN_H_
