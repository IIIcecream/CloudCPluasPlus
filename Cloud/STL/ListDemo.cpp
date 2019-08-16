#include "ListDemo.h"
#include <algorithm>

void ListDemo::demo()
{
    // add item
    m_nums.push_back(1);    // 末尾增加元素
    m_nums.push_front(3);   // 头部增加元素
    m_nums.insert(m_nums.begin(), 2);   // 头部增加元素
    // m_nums.insert(m_nums.begin() + 1, 3);  // 第1个元素前添加元素，list地址空间不连续，因此迭代器不能+1
    m_nums.insert(m_nums.begin(), 10, 3);

    // 访问元素
    //m_nums[0];
    //m_nums.at(0);
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

    // list 没有容量
    // m_nums.capacity();

    // 删除元素
    itr = m_nums.erase(m_nums.begin());
    m_nums.pop_back();
    m_nums.pop_front();

    // 排序
    m_nums.sort(); // 默认递增
    m_nums.sort([](int left, int right)->bool
    {
        return left < right;
    });
    sort(m_nums.begin(), m_nums.end());
}

