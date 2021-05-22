//
// Created by seongjin on 21. 5. 23..
// 특수화는 템플릿을 무시한다.
#include <iostream>
template <typename T>
void Swap(T &a, T &b);
struct job{
    char name[40];
    double salary;
    int floor;
};

//명시적 특수화
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main(){
    using namespace std;
    cout.precision(2);//소수점 2개
    cout.setf(ios::fixed, ios::floatfield);//고정 소수점,
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
    Swap(i, j);//void Swap(int &, int &)를 생성한다.
    cout << "이제 i, j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "job 교환전:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);//void Swap(job &, job &)를 사용한다.
    cout << "job 교환 후:\n";
    Show(sue);
    Show(sidney);
    //cin.get();
    return 0;
}
template <typename T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &j1, job &j2){
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j){
    using namespace std;
    cout << j.name << ": (" << j.floor << "층에 거주) "
        << "$" << j.salary << endl;
}