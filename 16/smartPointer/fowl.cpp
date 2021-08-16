//
// Created by seongjin on 21. 8. 16..
//

#include <iostream>
#include <string>
#include <memory>

int main(){
    using namespace std;
    auto_ptr<string> films[5] = {
            auto_ptr<string>(new string("Fowl Balls")),
            auto_ptr<string>(new string("Duck Walks")),
            auto_ptr<string>(new string("Chicken Runs")),
            auto_ptr<string>(new string("Turkey Errors")),
            auto_ptr<string>(new string("Goose Eggs"))
    };
    auto_ptr<string> pwin;
    pwin = films[2];//films[2]가 소유권을 잃음

    cout << "다음은 최고의 조류 영화상 후보입니다.\n";
    for(int i = 0; i < 5; i++){
        cout << *films[i] << endl;
    }
    cout << "수상자는 " << *pwin << "!\n";
    cin.get();
    return 0;
}
/*

 1.복사를 수행하도록 대입 연산자를 정의한다. 그러면 한 객체가 다른 객체의 복사본이 되므로 두 포인터는 서로 다른 객체를 지시한다.
 2.하나의 스마트 포인터만이 특정 객체를 소유할 수 있도록 소유권 개념을 도입한다. 스마트 포인터가 그 객체를 소유하고 있는 경우에만,
   파괴자가 그 객체를 삭제한다. 그러고 나서, 대입을 통해 소유권을 이전시킨다. 이것이 auto_ptr, unique_ptr에서 사용하는 전략이다.
 3.하나의 특정한 객체를 참조하는 스마트 포인터들이 몇 개인지 추적하는 훨씬 더 똑똑한 스마트 포인터를 생성한다. 이것을 참조 카운팅이라 한다.
   대입할 때마다 참조 카운팅이 1씩 증가된다. 어떤 스마트 포인터의 수명이 다할 때마다 참조 카운팅이 1씩 감소된다.
   따라서 마지막 스마트 포인터의 수명이 다했을 때 delete가 호출된다. 이것이 shared_ptr전략이다.
 */