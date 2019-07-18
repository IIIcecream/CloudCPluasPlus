#pragma once

#include <string>
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
// 继承
//////////////////////////////////////////////////////////////////////////

class Shape
{
public:
    Shape() {}
    virtual ~Shape() {}

    virtual double getArea() { return 0.; }
};

class Rectangle : public Shape
{
public:
    Rectangle(int nHight, int nWidth) : m_nHeight(nHight), m_nWidth(nWidth) {}

    virtual double getArea() override { return m_nWidth * m_nHeight; }

private:
    int m_nHeight;
    int m_nWidth;
};

class Triangle : public Shape
{
public:
    Triangle(int nHeight, int nBottom) : m_nHeight(nHeight), m_nBottom(nBottom) {}

    virtual double getArea() override { return m_nHeight * m_nBottom / 2.0; }

private:
    int m_nHeight;
    int m_nBottom;
};

//////////////////////////////////////////////////////////////////////////
//  重写与重载
//////////////////////////////////////////////////////////////////////////

class OverDemoBase
{
public:
    void set();
    void set(int n);
    void set(int n, int m);
    int set(int n, char *s);
    //double set() { return 1.0; }  // 仅仅返回值不同，不足以成为函数重载
};


//////////////////////////////////////////////////////////////////////////
// 多态
//////////////////////////////////////////////////////////////////////////


// 1. 静态多态

// 1.1 函数重载
int add(int left, int right);

double add(double left, double right);

void testAdd();

// 1.2 泛型编程
template <typename T>
T equal(T left, T right);


void testEqual();

// 2 动态多态
class IBase
{
public:
    virtual void printClass() = 0;
};

class Base : public IBase
{
public:
    virtual ~Base() {}

    void printType() { cout << "Base Type" << endl; }
    
    virtual void printClass() { cout << "Base Class" << endl; }

private:
    int n;
};

class Sub1 : public Base
{
public:
    void printType() { cout << "Sub1 Type" << endl; }

    virtual void printClass() override { cout << "Sub1 Class" << endl; }

private:
    int m;
};

class Sub2 : public Base
{
public:
    void printType() { cout << "Sub2 Type" << endl; }

    virtual void printClass() override { cout << "Sub2 Class" << endl; }
};

void testBaseSub();