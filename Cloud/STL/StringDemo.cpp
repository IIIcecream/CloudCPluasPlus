#include "StringDemo.h"

#include <string>
using std::string;

void StringDemo::demo()
{
    string s;

    // 初始化、添加元素
    s = "222";
    s.append(2, 'C');
    s.push_back('a');

    // 获取元素
    char c = s.at(2);
    c = s[2];

    // 修改元素
    s[2] = '3';

    // 遍历
    for (size_t i = 0; i < s.length(); ++i)
    {
        c = s[i];
    }

    for (auto itr = s.begin(); itr != s.end(); ++itr)
    {
        c = *itr;
    }

    // 删除元素
    s.pop_back();
    auto itr = s.begin() + 2;
    s.erase(itr);
}

