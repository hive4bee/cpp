#include "stacktp.h"
#include <iostream>
#include <string>
#include <cctype> //isalpha()

using std::cin;
using std::cout;
using std::string;

int main(){
    Stack2<string> st;
    char ch;
    string po;
    cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P,\n"
         << "종료하려면 Q를 입력하십시오.\n";
    while(cin >> ch && std::toupper(ch) != 'Q'){
        while(cin.get() !='\n'){
            continue;
        }
        if(!std::isalpha(ch)){
            cout << '\a';
            continue;
        }
        switch(ch){
            case 'A':
            case 'a':
                cout << "추가할 주문서의 번호를 입력하십시오: ";
                cin >> po;
                if(st.isfull()){
                    cout << "스택이 가득 차 있습니다\n";
                }else{
                    st.push(po);
                }
                break;
            case 'P':
            case 'p':
                if(st.isempty()){
                    cout << "스택이 비어있습니다.\n";
                }else{
                    st.pop(po);
                    cout << "#" << po << " 주문서를 처리했습니다.\n";
                }
                break;
            default:
                break;
        }
        cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
             << "종료하려면 Q를 입력하십시오.\n";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}