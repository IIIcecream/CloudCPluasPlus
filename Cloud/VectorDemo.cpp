#include "VectorDemo.h"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void VectorDemo::operVector()
{
    // ����һ�������洢 int
    vector<int> vec;

    // ��ʾ vec ��ԭʼ��С
    cout << "vector size = " << vec.size() << endl;

    // ���� 5 ��ֵ��������
    for (size_t i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // ��ʾ vec ��չ��Ĵ�С
    cout << "extended vector size = " << vec.size() << endl;

    // ���������е� 5 ��ֵ
    // 1. ע��i < 5��i <= 5��С��Խ��
    for (size_t i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // 2. vec�������ʱ��ע��size_t--�������ǻ����Խ�������
    //for (size_t i = 4; i >= 0; --i)
    //{
    //    cout << "value of vec [" << i << "] = " << vec[i] << endl;
    //}


    // ʹ�õ����� iterator ����ֵ  vector<int>::iterator
    for (auto itr = vec.begin(); itr != vec.end(); ++itr)
    {
        cout << "value of itr = " << *itr << endl;
    }

    // vec ����
    sort(vec.begin(), vec.end(), [](int a, int b)->bool
    {
        return a > b;
    });
}

