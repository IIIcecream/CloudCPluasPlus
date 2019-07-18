#include "classDemo.h"

int add(int left, int right)
{
    return left + right;
}

double add(double left, double right)
{
    return left + right;
}

void testAdd()
{
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
}


template <typename T>
T equal(T left, T right)
{
    return left == right;
}

void testEqual()
{
    cout << equal(1, 2) << endl;
    cout << equal(1.1, 2.2) << endl;
}

void testBaseSub()
{
    Base *p1 = new Sub1();
    p1->printType();
    p1->printClass();
    delete p1;
}
