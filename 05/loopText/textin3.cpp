//
// Created by seongjin on 21. 4. 10..
//

#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while(cin.fail() == false){
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << count << " 문자를 읽었습니다.\n";
    return 0;
}