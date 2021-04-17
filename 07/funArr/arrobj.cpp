//
// Created by seongjin on 21. 4. 18..
// C++11의 array객체에 대한 기능

#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const std::array<std::string, Seasons> Sname =
        {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons>* pa);
void show(std::array<double, Seasons> da);

int main(){
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}
void fill(std::array<double, Seasons>* pa){
    using namespace std;
    for(int i=0; i<Seasons; i++){
        cout << Sname[i] << "에 소요되는 비용: ";
        cin >> (*pa)[i];
    }
}
void show(std::array<double, Seasons> da){
    using namespace std;
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for(int i=0; i<Seasons; i++){
        cout << Sname[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "총 비용: $" << total << endl;
}