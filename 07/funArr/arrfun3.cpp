//
// Created by seongjin on 21. 4. 17..
// 배열을 처리하는 함수와 const

#include <iostream>
const int Max=5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
/*
 * const 키워드는 두 가지 방법으로 사용된다.
 * 첫 번째 방법은 상수 객체를 지시하는 포인터를 만드는 것이다.
 * 상수 객체를 지시하는 포인터를 사용하여 그 포인터가 지시하는 값을 변경할 수 없다.
 * 두 번째 방법은 포인터 자신을 상수로 만드는 것이다. 상수 포인터를 사용하여 그 포인터가
 * 지시하는 장소를 변경할 수 없다.
 * const int* pt = &age; //포인터를 사용하여 지시하는 값을 변경할 수 없으나 다른 위치로 변경은 가능함
 * int* const finger = &sloth; //포인터를 사용하여 지시하는 값을 변경할 수 있으나 다른 위치로 변경은 못
 */
int main(){
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0){
        cout << "재평가율을 입력하십시오: ";
        double factor;
        while(!(cin >> factor)){
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }
            cout << "잘못 입력했습니다, 수치를 입력하세요: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "프로그램을 종료합니다.\n";
    cin.get();
    cin.get();
    return 0;
}
int fill_array(double ar[], int limit){
    using namespace std;
    double temp;
    int i;
    for(i = 0; i < limit; i++){
        cout << (i+1) << "번 부동산의 가격: $";
        cin >> temp;
        if(!cin){
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }
            cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
            break;
        }
        else if(temp < 0){
            break;
        }
        ar[i]=temp;
    }
    return i;
}

void show_array(const double ar[], int n){
    using namespace std;
    for(int i=0; i<n; i++){
        cout << (i+1) << "번 부동산: $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n){
    for(int i=0; i<n; i++){
        ar[i] *= r;
    }
}