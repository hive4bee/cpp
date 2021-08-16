//
// Created by seongjin on 21. 8. 16..
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(){
    using namespace std;
    ifstream fin;
    fin.open("/home/seongjin/workspace/c++/16/string/tobuy.txt");
    if(fin.is_open() == false){
        cerr << "파일을 열 수 없습니다.\n";//iostream
        exit(EXIT_FAILURE);//둘 다 stdlib.h
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while(fin){
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "프로그램을 종료합니다.\n";
    fin.close();
    return 0;
}