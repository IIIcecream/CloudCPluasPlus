#pragma once

/*!
*@brief        std::list���÷�������
*@author       tangw  2019/08/16  20:31
*/

#include <list>
using std::list;

// ������ڵ�
struct ListNode1
{
    int val;
    ListNode1* next;
};

// ˫����ڵ�
struct ListNode2
{
    int val;
    ListNode2* prev;
    ListNode2* next;
};

class ListDemo
{
public:
    void demo();

private:
    list<int> m_nums;
};