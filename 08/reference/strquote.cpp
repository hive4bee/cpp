//
// Created by seongjin on 21. 5. 17..
// 서로 다른 설계
#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main(){
    string input;
    string copy;
    string result;

    cout << "문자열을 입력하시오: ";
    getline(cin, input);
    copy = input;
    cout << "입력한 문자열: " << input << endl;
    result = version1(input, "***");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    result = version2(input, "###");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    cout << "원래 문자열 재설정\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    return 0;
}

string version1(const string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2){
    s1 = s2 + s1 + s2;
    return s1;
}

const string & version3(string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
    //지역적으로 선언된 변쉐 대한 참조를 리턴하는 치명적인 결함을 가지고 있다.
    //이 함수는 컴파일은 되지만, 프로그램이 그 함수를 실행하려 시도할 때 실패한다.
}