//
// Created by seongjin on 21. 7. 12..
// 컴테인먼트(containment), 컴포지션(composition), 레이어링(layering)
// 다른 클래스에 속하는 객체를 클래스 멤버로 사용하는 것

#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>
class Student{
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;//내포된 객체
    ArrayDb scores;//내포된 객체
    //scores 출력을 위한 private 함수
    std::ostream &arr_out(std::ostream &os) const;
public:
    Student() :name("Null Student"), scores(){}
    explicit Student(const std::string &s): name(s), scores(){}
    explicit Student(int n): name("Nully"), scores(n){}
    Student(const std::string &s, int n): name(s), scores(n){}
    Student(const std::string &s, const ArrayDb &a): name(s), scores(a){}
    Student(const char *str, const double *pd, int n): name(str), scores(pd, n){}
    ~Student(){};
    double Average() const;
    const std::string &Name() const;
    double &operator[](int i);
    double operator[](int i) const;
    //프렌드
    //입력
    friend std::istream &operator>>(std::istream &is, Student &stu);//1워드
    friend std::istream &getline(std::istream &is, Student &stu);//1줄
    //출력
    friend std::ostream &operator<<(std::ostream &os, const Student &stu);
};
/*
explicit Student(int n): name("Nully"), scores(n){}
하나의 매개변수로 호출될 수 있는 생성자는, 그 매개변수의 데이터형을 클래스형으로 변환하는 함수로 기능함
이 예에서, 첫 번째 매개변수는, 그 배열에 넣을 값이 아니라, 배열의 원소 개수를 나타낸다.
그래서 그 생성자를 int-to-Student 변환 함수로 가능하게 허용하는 것은 사리에 맞지 않는다.
explicit를 사용하면 암시적 변환이 꺼진다. 만일 이 키워드를 생략하면,
Student doh("Homer", 10);//Homer를 저장한다. 원소 10개짜리 배열을 생성한다.
doh = 5;//name을 "Nully"로 설정한다. 원소 5개짜리 빈 배열로 설정한다.
 */
#endif //STUDENTC_H_
