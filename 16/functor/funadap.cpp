//
// Created by seongjin on 21. 8. 22..
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>

void Show(double);
const int LIM = 6;
int main(){
    using namespace std;

    double arr1[LIM] = {28, 29, 30, 35, 38, 59};
    double arr2[LIM] = {63, 65, 69, 75, 80, 99};

    vector<double> gr8(arr1, arr1 + LIM);
    vector<double> m8(arr2, arr2 + LIM);

    cout.setf(ios_base::fixed);
    cout.precision(1);

    cout << "gr8:\t";
    for_each(gr8.begin(), gr8.end(), Show);
    cout << endl;
    cout << "m8:\t";
    for_each(m8.begin(), m8.end(), Show);
    cout << endl;

    vector<double> sum(LIM);
    transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(), plus<double>());
    cout << "sum:\t";
    for_each(sum.begin(), sum.end(), Show);
    cout << endl;

    vector<double> prod(LIM);
    transform(gr8.begin(), gr8.end(), prod.begin(), bind1st(multiplies<double>(), 2.5));
    cout << "prod:\t";
    for_each(prod.begin(), prod.end(), Show);
    cout << endl;

    return 0;
}
void Show(double v){
    std::cout.width(6);
    std::cout << v << ' ';
}
/*
 STL은 몇 가지 기본적인 펑크터들을 정의한다.
 이들은 두 값을 더하는 것, 두 값이 같은지 비교하는 것과 같은 연산을 수행
 transform() 함수는 두 가지 버전이 있다.
 첫 번째 버전은 네 개의 매개변수를 사용한다.
 처음 두 매개변수는 컨테이너 안의 범위를 지정하는 이터레이터들이다.
 세 번째 매개변수는 결과를 복사할 위치를 지정하는 이터레이터이다.
 마지막 매개변수는ㄷ 새로운 원소들로 만들기 위해 그 범위에 있는 각 원소에 적용할 펑크터이다.
 두 번째 버전은 두 개의 매개변수를 취하는 함수를 사용한다.
 이것은 두 범위 각각에 있는 한 원소에 그 함수를 적용한다.
 */