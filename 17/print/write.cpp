//
// Created by seongjin on 21. 8. 25..
// write(): 제 1매개변수는 출력할 문자열의 주소 제공, 제 2매개변수는 출력할 문자들의

#include <iostream>
#include <cstring>

int main(){
    using std::cout;
    using std::endl;

    const char *state1 = "Florida";
    const char *state2 = "Kansas";
    const char *state3 = "Euphoria";

    int len = std::strlen(state2);
    cout << "루프 인덱스 증가:\n";
    int i;
    for(i = 1; i <= len; i++){
        cout.write(state2, i);
        cout << endl;
    }

    cout << "루프 인덱스 감소:\n";
    for(i = len; i > 0; i--){
        cout.write(state2, i) << endl;
    }

    cout << "문자열 길이 초과:\n";
    cout.write(state2, len + 5) << endl;

    return 0;
}