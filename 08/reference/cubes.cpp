//
// Created by seongjin on 21. 5. 16..
// 일반 매개변수와 참조 매개변

#include <iostream>
double cube(double a);
double refcube(double &ra);
int main(){
    using namespace std;
    double x = 3.0;
    cout << cube(x);
    cout << " = " << x << "의 세제곱\n";
    cout << refcube(x);
    cout << " = " << x << "의 세제곱\n";
    return 0;
}
double cube(double a){
    a *= a*a;
    return a;
}
double refcube(double &ra){//상수 참조를 사용하고 싶으면 const 키워드를 double 앞에 붙인다.
    ra *=ra*ra;
    return ra;
}