//
// Created by seongjin on 21. 8. 22..
//

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

template<typename T>
class TooBig{
private:
    T cutoff;
public:
    TooBig(const T &t): cutoff(t){}
    bool operator()(const T &v){ return v > cutoff; }
};

void outint(int n){ std::cout << n << " "; }
int main(){
    using std::list;
    using std::cout;
    using std::endl;
    using std::for_each;

    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);// range constructor
    list<int> etcetera(vals, vals + 10);

    cout << "원래의 리스트:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if(f100);
    etcetera.remove_if(TooBig<int>(200));
    cout << "정비된 리스트:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;

    return 0;
}