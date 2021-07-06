//
// Created by seongjin on 21. 7. 6..
//

#ifndef STATION_H_
#define STATION_H_
#include <string>
using std::string;
class Station{
private:
    string name;
    int number;
public:
    Station(string nm, int num);
    void Name(string nm);
    string Name();
    void Number(int num);
    int Number() const;
};

#endif //STATION_H_
