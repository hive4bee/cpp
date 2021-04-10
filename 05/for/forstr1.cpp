//
// Created by seongjin on 21. 4. 10..
//

#include <iostream>
#include <string>
int main(){
    using namespace std;
    cout << "단어 하나를 입력하십시오: ";
    string word;
    cin >> word;

    for(int i=word.size() -1; i>=0; i--){
        cout << word[i];
    }
    cout << "\n종료.";
    return 0;
}