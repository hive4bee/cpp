#ifndef STACKTP_H_
#define STACKTP_H_

template<typename Type>
class Stack2{
private:
    enum{MAX = 10};
    Type items[MAX];
    int top;
public:;
    Stack2();
    bool isempty();
    bool isfull();
    bool push(const Type &item);
    bool pop(Type &item);
};
template<typename Type>
Stack2<Type>::Stack2() {
    top = 0;
}
template<typename Type>
bool Stack2<Type>::isempty() {
    return top == 0;
}
template<typename Type>
bool Stack2<Type>::isfull() {
    return top == MAX;
}
template<typename Type>
bool Stack2<Type>::push(const Type &item) {
    if(top<MAX){
        items[top++]=item;
        return true;
    }else{
        return false;
    }
}
template<typename Type>
bool Stack2<Type>::pop(Type &item) {
    if(top>0){
        item = items[--top];
        return true;
    }else{
        return false;
    }
}

#endif