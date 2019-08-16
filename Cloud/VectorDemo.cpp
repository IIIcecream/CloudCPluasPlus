#include "VectorDemo.h"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void VectorDemo::operVector()
{
    // 创建一个向量存储 int
    vector<int> vec;

    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;

    // 推入 5 个值到向量中
    for (size_t i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;

    // 访问向量中的 5 个值
    // 1. 注意i < 5与i <= 5，小心越界
    for (size_t i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // 2. vec逆序遍历时，注意size_t--，这里是会造成越界崩溃的
    //for (size_t i = 4; i >= 0; --i)
    //{
    //    cout << "value of vec [" << i << "] = " << vec[i] << endl;
    //}


    // 使用迭代器 iterator 访问值  vector<int>::iterator
    for (auto itr = vec.begin(); itr != vec.end(); ++itr)
    {
        cout << "value of itr = " << *itr << endl;
    }

    // vec 排序
    sort(vec.begin(), vec.end(), [](int a, int b)->bool
    {
        return a > b;
    });
}

