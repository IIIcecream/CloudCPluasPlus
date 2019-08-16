#include "VectorDemo.h"
#include <algorithm>

void VectorDemo::demo()
{
    // add item
    m_nums.push_back(1);    // ĩβ����Ԫ��
    m_nums.insert(m_nums.begin(), 2);   // ͷ������Ԫ��
    m_nums.insert(m_nums.begin() + 1, 3);  // ��1��Ԫ��ǰ���Ԫ��

    m_nums.insert(m_nums.begin(), 10, 3);

    // ����Ԫ��
    m_nums[0];
    m_nums.at(0);
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

    // ��ȡ����Ŀǰ����
    m_nums.capacity();

    // ɾ��Ԫ��
    itr = m_nums.erase(m_nums.begin() + 2);
    m_nums.pop_back();

    // ����
    sort(m_nums.begin(), m_nums.end(), [](int left, int right)->bool
    {
        return left < right;
    });
}

