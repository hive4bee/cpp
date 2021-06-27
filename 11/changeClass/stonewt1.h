//
// Created by seongjin on 21. 6. 20..
//

#ifndef STONEWT1_H_
#define STONEWT1_H_


class Stonewt {
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;

    //변환함수: 클래스의 메서드여야 함, 리턴형을 가지면 안됨, 매개변수를 가지면 안됨
    operator int() const;
    operator double() const;
};


#endif //STONEWT1_H_
