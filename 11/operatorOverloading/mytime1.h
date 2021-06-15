//
// Created by seongjin on 21. 6. 14..
// Time 클래스(연산자 오버로딩 이후)

#ifndef MYTIME1_H
#define MYTIME1_H

class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    void show() const;
};

#endif //INC_11_MYTIME1_H
