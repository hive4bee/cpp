//
// Created by seongjin on 21. 6. 6..
//

#ifndef INC_10_STOCK20_H
#define INC_10_STOCK20_H

#include <string>

class Stock {
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() {
        total_val = shares * share_val;
    }

public:
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};

#endif //INC_10_STOCK20_H
