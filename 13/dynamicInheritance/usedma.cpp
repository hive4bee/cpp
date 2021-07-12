//
// Created by seongjin on 21. 7. 11..
//
#include <iostream>
#include "dma.h"
#include "acctabc.h"

int main(){
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo keys", 5);

    cout << "baseDMA 객체를 출력한다:\n";
    cout << shirt << endl;

    cout << "lacksDMA 객체를 출력한다:\n";
    cout << balloon << endl;

    cout << "hasDMA 객체를 출력한다:\n";
    cout << map << endl;

    lacksDMA balloon2(balloon);

    cout << "lacksDMA 복사 결과:\n";
    cout << balloon2 << endl;

    hasDMA map2;
    map2 = map;

    cout << "hasDMA 대입결과:\n";
    cout << map2 << endl;

    hasDMA imsi;
    imsi = shirt;

    cout << "/////////////" << endl;
    cout << imsi << endl;
    cout << "/////////////" << endl;
    hasDMA temp = (const baseDMA &) shirt;
    cout << temp << endl;
    return 0;
}

