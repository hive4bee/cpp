//
// Created by seongjin on 21. 4. 18..
// 함수 포인터를 가지는 배열

#include <iostream>
const double* f1(const double ar[], int n);
const double* f2(const double [], int);//식별자 제외 가능
const double* f3(const double *, int);

int main(){
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    const double* (*p1)(const double *, int) = f1;
    auto p2 = f2;//C++11 자동 형 변환
    //C++11 이전 버전을 사용할 경우 아래로 대체
    //const double *(*p2)(const double *, int) = f2;
    cout << "함수 포인터:\n";
    cout << "주소 값\n";
    cout << (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
    cout << p2(av, 3) << ": " << *p2(av,3) << endl;

    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    cout << "\n함수 포인터를 원소로 가지는 배열:\n";
    cout << "주소 값\n";
    for(int i=0; i<3; i++) {
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    }
    cout << "\n함수 포인터를 가리키는 포인터:\n";
    cout << "주소 값\n";
    for(int i=0; i<3; i++){
        cout << pb[i](av,3) << ": " << *pb[i](av, 3) << endl;
    }

    cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터:\n";
    cout << "주소 값\n";
    auto pc = &pa;

    cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av, 3) << endl;
    const double *(*(*pd)[3])(const double *, int) = &pa;

    const double* pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;

    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av,3) << endl;
    return 0;
}

const double* f1(const double * ar, int n){
    return ar;
}
const double* f2(const double ar[], int n){
    return ar+1;
}
const double* f3(const double ar[], int n){
    return ar+2;
}