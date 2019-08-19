#pragma once

/*!
*@brief        std::list���÷�������
*@author       tangw  2019/08/16  20:31
*/

#include <list>
using std::list;

// ������ڵ�
struct SingleListNode
{
    SingleListNode(int n) : val(n), next(nullptr) {}

    int val;
    SingleListNode* next;
};

// ˫����ڵ�
struct DoubleListNode
{
    DoubleListNode(int n) : val(n), prev(nullptr), next(nullptr) {}

    int val;
    DoubleListNode* prev;
    DoubleListNode* next;
};

class ListDemo
{
public:
    void demo();
    void myListDemo();

private:
    list<int> m_nums;
};