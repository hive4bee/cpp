//
// Created by seongjin on 21. 4. 18..
// 함수의 재귀 호출

#include <iostream>
void countdown(int n);

int main(){
    countdown(4);
    return 0;
}
void countdown(int n){
    using namespace std;
    cout << "카운트 다운...." << n << endl;
    if(n>0){
        countdown(n-1);
    }
    cout << n << ": Kaboom!\n";
}