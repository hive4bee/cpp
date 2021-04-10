//
// Created by seongjin on 21. 4. 10..
//

#include <iostream>
int main(){
    using namespace std;
    cout << "카운트 시작값을 입력하십시오: ";
    int limit;
    cin >> limit;
    int i;
    for(i = limit; i; i--){
        cout << "i = " << i << "\n";
    }
    cout << "i = " << i << "이므로 루프를 종료함\n";
    return 0;
}