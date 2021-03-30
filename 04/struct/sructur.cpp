//
// Created by seongjin on 21. 3. 30..
//

#include <iostream>
struct inflatable{
    char name[20];
    float volumn;
    double price;
};

int main(){
    using namespace std;
    inflatable guest = {
            "Glorious",
            1.88,
            29.99
    };

    inflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };

    cout << "지금 판매하고 있는 모형풍선은\n" << guest.name;
    cout << "와 " << pal.name << "입니다.\n";
    cout << "두 제품을 $";
    cout << guest.price + pal.price << "에 드리겠습니다.\n";
    return 0;
}