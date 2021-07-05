//
// Created by seongjin on 21. 7. 5..
//
#include <iostream>
#include "brass.h"

int main(){
    using std::cout;
    using std::endl;

    Brass Piggy("Porelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "Hogg 씨의 계좌에 $1000 입금:\n";
    Hoggy.Deposit(1000.00);
    cout << "Hogg 씨의 현재 잔액: $" << Hoggy.Balance() << endl;
    cout << "Pigg 씨의 계좌에서 $4200 인출:\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg 씨의 현재 잔액: $" << Piggy.Balance() << endl;
    cout << "Hogg 씨의 계좌에서 $4200 인출:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0;
}