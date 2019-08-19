#pragma once

/*!
*@brief        std::list常用方法介绍
*@author       tangw  2019/08/16  20:31
*/

#include <list>
using std::list;

// 单链表节点
struct SingleListNode
{
    SingleListNode(int n) : val(n), next(nullptr) {}

    int val;
    SingleListNode* next;
};

// 双链表节点
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