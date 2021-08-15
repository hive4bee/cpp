//
// Created by seongjin on 21. 8. 15..
//

#ifndef SALES_H_
#define SALES_H_

#include <stdexcept>
#include <string>

class Sales{
public:
    enum{ MONTHS = 12 };
    class bad_index: public std::logic_error{
    private:
        int bi;
    public:
        explicit bad_index(int ix, const std::string & s = "Sales 객체에서 인덱스 에러\n");
        int bi_val() const { return bi; }
        virtual ~bad_index() throw() {}
    };
    explicit Sales(int yy = 0);
    Sales(int yy, const double *gr, int n);
    virtual ~Sales(){}
    int Year() const { return year; }
    virtual double operator[](int i) const;
    virtual double &operator[](int i);
private:
    double gross[MONTHS];
    int year;
};

class LabeledSales: public Sales{
public:
    class nbad_index: public Sales::bad_index{
    private:
        std::string lbl;
    public:
        nbad_index(const std::string &lb, int ix, const std::string &s = "LabeledSales 객체에서 인덱스 에러\n");
        const std::string &label_val() const { return lbl; }
        virtual ~nbad_index() throw(){}
    };
    explicit LabeledSales(const std::string &lb = "없음", int yy = 0);
    LabeledSales(const std::string &lb, int yy, const double *gr, int n);
    virtual ~LabeledSales(){}
    const std::string &Label() const { return label; }
    virtual double operator[](int i) const;
    virtual double &operator[](int i);
private:
    std::string label;
};

#endif //EXCEPTION_SALES_H
/*
 stdexcept 예외 클래스
 stdexcept 헤더 파일은 몇 가지 예외 클래스들을 더 정의한다.
 첫째, 이 헤더 파일은 logic_error 와 runtime_error 클래스를 정의한다.
 class logic_error: public exception {
  public:
    explicit logic_error(const string &what_arg);
    ...
 };

 class domain_error: public logic_error{
 public:
    explicit domain_error(const string &what_arg);
    ...
 };

 생성자들이 매개변수로 string 객체를 사용하는 것을 주목해야 한다.
 이 매개변수는 what() 메서드에 의해 c스타일 문자열로 리턴된 문자 데이터를 제공한다.
 이 두 새로운 클래스는 두 파생 클래스들의 패밀리를 위한 기초 클래스의 역할을 한다.
 logic_error 패밀리는 기대하는 대로 일반적인 논리 에러들을 서술한다.
 domain_error, invalid_argument, length_error, out_of_bounds
 각자의 클래스는 사용자가 what() 메서드에 의해 리턴되는 문자열을 제공하는
 logic_error 의 생성자와 같은 생성자를 가지고 있다.

 수학 함수는 정의역과 치역을 가진다. 정의역은 그 함수가 정의되는 값들로 이루어진다.
 치역은 그 함수가 리턴하는 값들로 이루어진다. std::sin() 함수에 매개변수를 전달하는 함수를
 작성한다면, 매개변수가 -1에서 +1까지의 정의역을 벗어날 때 그 함수가 domain_error객체를 발생시키도록 할 수 있다.
 (square root <- negative number)

 invalid_argument 예외는 기대하지 않는 값이 함수에 전달되었다는 것을 사용자에게 경고한다.
 예를 들어, 각각의 문자가 '0' 또는 '1' 인 문자열을 받기를 함수가 기대한다면, 그 문자열에
 어떤 다른 문자가 나타났을 때 invalid_argument 예외를 발생시킬 수 있다.

 length_error 예외는 원하는 액션을 취한 만큼 충분한 공간을 사용할 수 없다는 것을 나타낸다.

 out_of_bounds 예외는 일반적으로 인덱싱 에러들을 나타내는 데 사용된다.

 runtime_error 패밀리는 예측이 어렵고 예방도 어려운, 실행하는 동안에 나타날 수 있는 에러들을 서술한다.
 range_error, overflow_error, underflow_error

 */