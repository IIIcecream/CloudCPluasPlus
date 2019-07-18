#pragma once

/*!
*@brief        ��Ա��ʼ��test
*@author       tangw  2019/07/18  15:51
*@remarks      ��֤��ʼ���б��빹�캯���и�ֵ�Ĳ���
*/
#include <iostream>
using namespace std;

class InitTest
{
public:
    InitTest() // �޲ι��캯��
    {
        cout << "construct InitTest" << endl;
        m_nID = 0;
    }

    InitTest(const InitTest& oTest) // �������캯��
    { 
        cout << "Copy constructor InitTest" << endl;
        m_nID = oTest.getID();
    }

    InitTest& operator= (const InitTest& oTest) // ��ֵ���������
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
    InitTestDemo(InitTest &oTest) : m_oTest(oTest) {}       // ֻ��ִ�� m_oTest�Ŀ�������
    //InitTestDemo(InitTest &oTest) { m_oTest = oTest; }    // ��ִ��һ�� m_oTest�Ĺ��캯��������ִ��һ�� = ��ֵ����

private:
    InitTest m_oTest;
};

void initTest()
{
    InitTest oTest;
    InitTestDemo oDemo(oTest);
}