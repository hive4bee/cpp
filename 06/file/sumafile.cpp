//
// Created by seongjin on 21. 4. 11..
//

#include <iostream>
#include <fstream> //파일 i/o 지원
#include <cstdlib> //exit()지원
const int SIZE=60;
int main(){
    using namespace std;
    char filename[SIZE];
    ifstream inFile; //파일 입력을 처리하기 위한 객체
    cout << "데이터 파일의 이름을 입력하십시오: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open()){
        cout << filename << " 파일을 열 수 없습니다." << endl;
        cout << "프로그램을 종료합니다.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while(inFile.good()){//입력이 양호하고 EOF가 아닌 동안
        ++count;
        sum += value;//누계를 계산
        inFile >> value;//다음 값을 얻는다.
    }
    if(inFile.eof()){
        cout << "파일 끝에 도달했습니다.\n";
    }else if(inFile.fail()){
        cout << "데이터 불일치로 입력이 종료되었습니다.\n";
    }else{
        cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
    }

    if(count == 0){
        cout << "데이터가 없습니다.\n";
    }else{
        cout << "읽은 항목의 개수: " << count << endl;
        cout << "합계: " << sum << endl;
        cout << "평균: " << sum / count << endl;
    }
    inFile.close();
    return 0;

}