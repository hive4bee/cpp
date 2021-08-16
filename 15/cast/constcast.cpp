//
// Created by seongjin on 21. 8. 15..
//

#include <iostream>
using std::cout;
using std::endl;

void change(const int *pt, int n);

int main(){
    int pop1 = 38383;
    const int pop2 = 2000;

    cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
    change(&pop1, -103);
    change(&pop2, -103);
    cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;

    return 0;
}

void change(const int *pt, int n){
    int *pc;
    pc = const_cast<int *>(pt);
    *pc += n;
}

/*
 dynamic_cast: 기초클래스로 캐스팅(업캐스팅)
 const_cast: const 캐스팅(데이터 형 변환은 안됨)
 static_cast: 데이터형을 변활할 때 사용
 reinterpret_cast:
 */