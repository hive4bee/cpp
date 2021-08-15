//
// Created by seongjin on 21. 8. 15..
//

#include <iostream>
#include <string>

int main(){
    using namespace std;
    string one("Lottery Winner!");//#1 string객체를 s가 지시하는 NBTS로 초기화한다.
    cout << one << endl;

    string two(20, '$');//#2 문자 $로 모두 초기화된 원소 20개의 string 객체를 생성한다.
    cout << two << endl;

    string three(one);//#3 string 객체를 string객체 str(복사 생성자)로 초기화한다.
    cout << three << endl;

    one += " Oops!";// operator+=
    cout << one << endl;

    two = "Sorry! That was ";
    three[0] = 'P';
    string four;//#4 크기가 0인 디폴트 string 객체를 생성한다.(디폴트 생성자)
    four = two + three;//operator+, operator=
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls, 20);//#5 string객체를 s가 지시하는 NBTS로 초기화하되, NBTS의 크기를 초과하더라도 n개의 문자까지 진행한다.
    cout << five << "!\n";

    string six(alls + 6, alls + 10);//#6 string객체를 [begin, end)의 범위에 있는 값들로 초기화한다.
    cout << six << ", ";
    cout << endl;
    printf("%c %c", five[6], five[10]);
    cout << endl;
    string seven(&five[6], &five[10]);//#6
    cout << seven << "...\n";

    string eight(four, 7, 16);//#7 str에 있는 pos 위치에서 시작해서 str의 끝까지 가거나, n문자를 사용하되 str의 끝을 넘어갈 수 없다.
    cout << eight << "in motion!" << endl;

    return 0;
}