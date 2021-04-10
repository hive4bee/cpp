//
// Created by seongjin on 21. 4. 11..
//

#include <iostream>
#include <fstream>
int main(){
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("/home/seongjin/carinfo.txt");

    cout << "자동차 메이커와 차종을 입력하십시오: ";
    cin.getline(automobile, 50);
    cout << "연식을 입력하십시오: ";
    cin >> year;
    cout << "구입 가격을 입력하십시오: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);//setf()는 형식을 설정하는 함수이며, showpoint는 소수점과 0들을 모두 출력함(기본6자리)
    cout << "메이커와 차종: " << automobile << endl;
    cout << "연식: " << year << endl;
    cout << "구입 가격 $" << a_price << endl;
    cout << "현재 가격 $" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "메이커와 차종: " << automobile << endl;
    outFile << "연식: " << year << endl;
    outFile << "구입 가격 $" << a_price <<endl;
    outFile << "현재 가격 $" << d_price << endl;
    outFile.close();
    return 0;
}