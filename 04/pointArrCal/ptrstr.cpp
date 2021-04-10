//
// Created by seongjin on 21. 4. 4..
//문자열을 지시하는 포인터의 사용

#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char animal[20] = "bear";
    const char* bird = "wren"; //bird에 문자열의 주소가 들어 있음
    printf("%c / %c", animal[0], animal[1]);
    char* ps;

    cout << animal << " and ";
    cout << bird << "\n";//cout에 포인터를 전달하면 주소가 출력되지만, 포인터가 char*형일 경우에는 그 포인터가 지시하는 문자열이 출력됨
    //cout << ps << "\n";//쓰레기를 출력하거나 먹통이 됨

    cout << "동물의 종류를 입력하십시오: ";
    cin >> animal;
    //cin >> ps; //절대로 하면 안됨
    //ps가 대입된 공간을 지시하고 있지 않다.

    ps = animal;
    cout << ps << "s!\n";
    cout << "strcpy() 사용전:\n";
    cout << (int*) animal << ": " << animal << endl;
    cout << (int*) ps << ": " << ps << endl;

    ps = new char[strlen(animal) + 1];//새 메모리를 대입
    strcpy(ps, animal); //새 메모리에 문자열을 복사
    cout << "strcpy() 사용 후:\n";
    cout << (int*) animal << ": " << animal << endl;
    cout << (int*) ps << ": " << ps << endl;
    delete[] ps;
    return 0;
}