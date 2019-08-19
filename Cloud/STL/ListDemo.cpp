#include "ListDemo.h"
#include <algorithm>

void ListDemo::demo()
{
    // add item
    m_nums.push_back(1);    // ĩβ����Ԫ��
    m_nums.push_front(3);   // ͷ������Ԫ��
    m_nums.insert(m_nums.begin(), 2);   // ͷ������Ԫ��
    // m_nums.insert(m_nums.begin() + 1, 3);  // ��1��Ԫ��ǰ���Ԫ�أ�list��ַ�ռ䲻��������˵���������+1
    m_nums.insert(m_nums.begin(), 10, 3);

    // ����Ԫ��
    //m_nums[0];
    //m_nums.at(0);
    auto itrFirst = m_nums.begin();

    // ����Ԫ��
    // ����1-��������
    for each(int n in m_nums)
    {
        if (n == 2) break;
    }
    for (auto itr = m_nums.begin(); itr != m_nums.end(); ++itr)
    {
        if (*itr == 2) break;
    }
    // ����2-���ַ�����
    auto itr = find(m_nums.begin(), m_nums.end(), 2);

    // ��ȡ��βԪ��,ע��back��end������
    m_nums.back();
    m_nums.front();

    m_nums.begin();
    m_nums.end();

    m_nums.rbegin();
    m_nums.rend();

    // �пգ���ȡ����Ԫ�ظ���
    m_nums.empty();
    m_nums.size() == 0;

    // list û������
    // m_nums.capacity();

    // ɾ��Ԫ��
    itr = m_nums.erase(m_nums.begin());
    m_nums.pop_back();
    m_nums.pop_front();

    // ����
    m_nums.sort(); // Ĭ�ϵ���
    m_nums.sort([](int left, int right)->bool
    {
        return left < right;
    });
    sort(m_nums.begin(), m_nums.end());
}

/*!
*@brief        ����
*@author       tangw  2019/08/19  17:18
*/
void ListDemo::myListDemo()
{
    // ������
    SingleListNode *pSingleHead = nullptr;
    int n = 5;
    SingleListNode *p = pSingleHead;
    while (n--)
    {
        SingleListNode* pNewNode = new SingleListNode(n);
        if (p) p->next = pNewNode;
        
        p = pNewNode;
    }
    // ��������
    p->next = pSingleHead;

    // ˫����
    DoubleListNode *pDoubleHead = nullptr;
    int n = 5;
    DoubleListNode *pPrev = pDoubleHead;
    DoubleListNode *pCur = pDoubleHead;
    while (n--)
    {
        DoubleListNode *pNewNode = new DoubleListNode(n);
        if (pCur) pCur->next = pNewNode;

        pPrev = pCur;
        pCur = pNewNode;
    }
}

