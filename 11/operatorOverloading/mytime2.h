//
// Created by seongjin on 21. 6. 14..
//

#ifndef MYTIME2_H_
#define MYTIME2_H_

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
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    void show() const;
};

#endif //INC_11_MYTIME2_H
