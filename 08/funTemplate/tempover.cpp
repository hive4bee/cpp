//
// Created by seongjin on 21. 5. 23..
// 템플릿 오버로딩
#include <iostream>
template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T* arr[], int n);
struct debts{
    char name[50];
    double amount;
};
int main(void){
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}
    };
    double* pd[3];
    //포인터들을 배열 mr_E에 있는 구조체들의 amount 멤버로 설정한다.
    for(int i=0; i<3; i++){
        pd[i] = &mr_E[i].amount;
    }
    cout << "Mr. E의 재산 목록:\n";
    //things는 int형의 배열이다.
    ShowArray(things, 6);
    cout << "Mr. E의 채무 목록:\n";
    //pd는 double형을 지시하는 포틴터들의 배열이다.
    ShowArray(pd, 3);
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n){
    using namespace std;
    cout << "템플릿 A\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
template <typename T>
void ShowArray(T* arr[], int n){
    using namespace std;
    cout << "템플릿 B\n";
    for(int i=0; i<n; i++){
        cout << *arr[i] << ' ';
    }
    cout << endl;
}