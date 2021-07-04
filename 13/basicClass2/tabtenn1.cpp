//
// Created by seongjin on 21. 7. 5..
//
#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht):
firstName(fn), lastName(ln), hasTable(ht){}

void TableTennisPlayer::getName() const{
    std::cout << lastName << ", " << firstName;
}

RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht):
TableTennisPlayer(fn, ln, ht){
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp): TableTennisPlayer(tp), rating(r){}
