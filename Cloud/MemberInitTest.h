#pragma once

/*!
*@brief        成员初始化test
*@author       tangw  2019/07/18  15:51
*@remarks      验证初始化列表与构造函数中赋值的差异
*/
#include <iostream>
using namespace std;

class InitTest
{
public:
    InitTest() // 无参构造函数
    {
        cout << "construct InitTest" << endl;
        m_nID = 0;
    }

    InitTest(const InitTest& oTest) // 拷贝构造函数
    { 
        cout << "Copy constructor InitTest" << endl;
        m_nID = oTest.getID();
    }

    InitTest& operator= (const InitTest& oTest) // 赋值运算符重载
    {
        cout << "assignment InitTest" << endl;
        m_nID = oTest.getID();
        return *this;
    }

    int getID() const { return m_nID; }
    void setID(int nID) { m_nID = nID; }
    
private:
    int m_nID;
};

class InitTestDemo
{
public:
    InitTestDemo(InitTest &oTest) : m_oTest(oTest) {}       // 只会执行 m_oTest的拷贝构造
    //InitTestDemo(InitTest &oTest) { m_oTest = oTest; }    // 会执行一次 m_oTest的构造函数，还会执行一次 = 赋值运算

private:
    InitTest m_oTest;
};

void initTest()
{
    InitTest oTest;
    InitTestDemo oDemo(oTest);
}