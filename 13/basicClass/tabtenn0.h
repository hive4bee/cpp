//
// Created by seongjin on 21. 7. 3..
//

#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <string>
using std::string;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void name() const;
    bool getHasTable() const {return hasTable;}
    void resetTable(bool v){hasTable = v;}
};

#endif //TABTENN0_H_
