//
// Created by seongjin on 21. 6. 14..
// Time 클래스(연산자 오버로딩 이전)

#ifndef MYTIME0_H_
#define MYTIME0_H_
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
    Time sum(const Time & t) const;//
    void show() const;
};
#endif //INC_11_MYTIME0_H
//const Stock & topval(const Stock & s) const;
/*
 * 괄호 안에 있는 const 는 그 함수가 명시적으로 접근된 객체를 변경하지 않는다는 뜻이고
 * 괄호 뒤에 있는 const 는 그 함수가 암시적으로 접근된 객체를 변경하지 않는다는 뜻임.
 * 맨 앞의 const 는 리턴형 역시 변경하지 않는다는 뜻/
 */