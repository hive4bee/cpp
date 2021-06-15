//
// Created by seongjin on 21. 6. 15..
//
#include <iostream>
#include "mytime3.h"
int main(){
    using std::cout;
    using std::endl;
    Time aida(3, 25);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida와 Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;//operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida.operator*(1.17);//operator*()
    temp = operator*(1.17, aida);
    temp = 1.17 * aida;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10 * Tosca: " << 10 * tosca << endl;
    operator<<(cout, temp);
    cout << temp;
    return 0;
}