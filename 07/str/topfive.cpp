//
// Created by seongjin on 21. 4. 18..
// string객체의 배열을 처리한다.
#include <iostream>
#include <string>
using namespace std;
const int SIZE=5;
void display(const string sa[], int n);
int main(){
    string list[SIZE];
    cout << "좋아하는 밤하느의 광경을 " << SIZE << "개 입려하십시오:\n";
    for(int i=0; i<SIZE; i++){
        cout << i+1 << ": ";
        getline(cin, list[i]);
    }
    cout << "입력하신 내용은 다음과 같습니다:\n";
    display(list, SIZE);
    return 0;
}
void display(const string sa[], int n){
    for(int i=0; i<n; i++){
        cout << i+1 << ": " << sa[i] << endl;
    }
}

