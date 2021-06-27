//
// Created by seongjin on 21. 6. 18..
//

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
namespace VECTOR{
    class Vector{
    public:
        enum Mode{RECT, POL};
        //직사각형을 위해서는 RECT를, Polar modes를 위해서는 POL을 사용한다.
    private:
        double x;//수평
        double y;//수직
        double mag;//벡터길이
        double ang;//방위(도)로 표시되는 벡터의 방향
        Mode mode;//POL을 위해서 RECT를 (RECT 또는 POL)
        //값들을 설정하는 private 메서드들
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const {return mag;}
        double angval() const {return ang;}
        void polar_mode();
        void rect_mode();
        //연산자 오버로딩
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        //프렌드
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif //VECTOR_H_
