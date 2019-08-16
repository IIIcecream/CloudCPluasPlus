#include "VectorDemo.h"
#include <algorithm>

void VectorDemo::demo()
{
    // add item
    m_nums.push_back(1);    // 末尾增加元素
    m_nums.insert(m_nums.begin(), 2);   // 头部增加元素
    m_nums.insert(m_nums.begin() + 1, 3);  // 第1个元素前添加元素

    m_nums.insert(m_nums.begin(), 10, 3);

    // 访问元素
    m_nums[0];
    m_nums.at(0);
    auto itrFirst = m_nums.begin();

    // 查找元素
    // 方法1-遍历查找
    for each(int n in m_nums)
    {
        if (n == 2) break;
    }
    for (auto itr = m_nums.begin(); itr != m_nums.end(); ++itr)
    {
        if (*itr == 2) break;
    }
    // 方法2-二分法查找
    auto itr = find(m_nums.begin(), m_nums.end(), 2);

    // 获取首尾元素,注意back与end的区别
    m_nums.back();
    m_nums.front();

    m_nums.begin();
    m_nums.end();

    m_nums.rbegin();
    m_nums.rend();

    // 判空，获取容器元素个数
    m_nums.empty();
    m_nums.size() == 0;

    // 获取容器目前容量
    m_nums.capacity();

    // 删除元素
    itr = m_nums.erase(m_nums.begin() + 2);
    m_nums.pop_back();

    // 排序
    sort(m_nums.begin(), m_nums.end(), [](int left, int right)->bool
    {
        return left < right;
    });
}

