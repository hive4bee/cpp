//
// Created by seongjin on 21. 7. 5..
//
#include <iostream>
#include "tabtenn1.h"

int main(){
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.getName();
    if(rplayer1.getHasTable()){
        cout << ": 탁구대가 있다.\n";
    }else{
        cout << ": 탁구대가 없다.\n";
    }
    player1.getName();
    if(player1.getHasTable()){
        cout << ": 탁구대가 있다.\n";
    }else{
        cout << ": 탁구대가 없다.\n";
    }
    cout << "이름: ";
    rplayer1.getName();
    cout << "; 랭킹: " << rplayer1.getRating() << endl;
    RatedPlayer rplayer2(1212, player1);
    cout << "이름: ";
    rplayer2.getName();
    cout << "; 랭킹: " << rplayer2.getRating() << endl;
    return 0;
}
