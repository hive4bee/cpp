//
// Created by seongjin on 21. 4. 10..
//

#include <iostream>
int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "정수를 하나 입력하십시오: ";
    int by;
    cin >> by;
    cout << "갱신 크기 " << by << "S:\n";
    for(int i=0; i<100; i=i+by){
        cout << i << endl;
    }
    return 0;
}