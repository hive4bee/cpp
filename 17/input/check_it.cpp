//
// Created by seongjin on 21. 8. 27..
//

#include <iostream>

int main(){
    using namespace std;
    cout << "수를 입력하십시오: ";

    int sum = 0;
    int input;
    while(cin >> input){
        sum += input;
    }

    cout << "마지막으로 입력한 값 = " << input << endl;
    cout << "합계 = " << sum << endl;
    return 0;
}
/*
입력이 프로그램의 기대와 달라서 입력에 실패하면, cin >> input은 false로 평가되어 while루프가 종료된다.
 */