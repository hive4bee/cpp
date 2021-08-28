//
// Created by seongjin on 21. 8. 27..
//

#include <iostream>
#include <exception>

int main(){
    using namespace std;
    //failbit가 예외를 발생시키게 만든다.
    cin.exceptions(ios_base::failbit);
    cout << "수를 입력하십시오: ";
    int sum = 0;
    int input;
    try{
        while(cin >> input) {
            sum += input;
        }
    }catch(ios_base::failure &bf){
        cout << bf.what() << endl;
        cout << "mistake";
    }
    cout << "마지막으로 입력한 값 = " << input << endl;
    cout << "합계 = " << sum << endl;
    return 0;
}