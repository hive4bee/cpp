//
// Created by seongjin on 21. 7. 3..
//

#include <iostream>
#include "tabtenn0.h"

int main(){
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.name();
    if(player1.getHasTable()){
        cout << ": 탁구대가 있다.\n";
    }else{
        cout << ": 탁구대가 없다.\n";
    }
    player2.name();
    if(player2.getHasTable()){
        cout << ": 탁구대가 있다.\n";
    }else{
        cout << ": 탁구대가 없다.\n";
    }
    return 0;
}