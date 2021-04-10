//
// Created by seongjin on 21. 4. 4..
//

#include <iostream>
#include <cstring>
using namespace std;
char* getname(void);
int main(){
    char* name;

    name = getname();
    cout << (int*) name << ": " << name << "\n";
    delete[] name;

    name = getname();
    cout << (int*) name << ": " << name << "\n";
    delete[] name;
    return 0;
}
char* getname(){//새 문자열을 가리키는 포인터를 리턴한다.
    char temp[80];
    cout << "이름을 입력하십시오: ";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];//이곳에서 new를 사용하고 main()함수 내에서 delete 되는것을 확인하자
    //pn 없이 temp의 주소를 리턴했다면.. 함수가 종료되어 자동으로 메모리에서 해제되므로 main()에 쓰레기값이 리턴
    strcpy(pn, temp);
    return pn;
}