#pragma once

/*!
*@brief        std::list常用方法介绍
*@author       tangw  2019/08/16  20:31
*/

#include <list>
using std::list;

// 单链表节点
struct ListNode1
{
    int val;
    ListNode1* next;
};

// 双链表节点
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