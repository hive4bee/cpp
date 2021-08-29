//
// Created by seongjin on 21. 8. 29..
//
/*
 파일 모드
 ios_base::in       파일을 읽기 위해 연다.
 ios_base::out      파일을 쓰기 위해 연다
 ios_base::ate      파일을 열 때 파일 끝을 찾는다.
 ios_base::app      파일 끝에 덧붙인다.
 ios_base::trunc    파일이 이미 존재하면 파일 내용을 비운다.
 ios_base::binary   2진 파일

 ios_base::out | ios_base::trunc    쓰기 위해 열고, 파일이 이미 존재하면 내용을 비운다.
 ios_base::out | ios_base::app      쓰기 위해 열고, 뒤에 덧붙인다.
 ios_base::in | ios_base::out       읽기/쓰기 겸용으로 열고, 파일 안의 어디에나 쓸 수 있다.
 ios_base::in | ios_base::out | ios_base::trunc 읽기/쓰기 겸용으로 열고, 파일이 이미 존재하면 그 파일의 내용을 먼저 비움

 */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> //또는 stdlib.h, exit()를 사용하기 위해
const char *file = "guests.txt";
int main(){
    using namespace std;
    char ch;

    ifstream fin;
    fin.open(file);
    if(fin.is_open()){
        cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
        while(fin.get(ch)){
            cout << ch;
        }
        fin.close();
    }

    ofstream fout(file, ios_base::out | ios_base::app);
    if(!fout.is_open()){
        cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }

    cout << "새로운 손님 이름들을 입력하십시오(끝내려면 빈 줄 입력):\n";
    string name;
    while(getline(cin, name) && name.size()>0){
        fout << name << endl;
    }
    fout.close();

    fin.clear();
    fin.open(file);
    if(fin.is_open()){
        cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
        while(fin.get(ch)){
            cout << ch;
        }
        fin.close();
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}