#include "StringDemo.h"

#include <string>
using std::string;

void StringDemo::demo()
{
    string s;

    // ��ʼ�������Ԫ��
    s = "222";
    s.append(2, 'C');
    s.push_back('a');

    // ��ȡԪ��
    char c = s.at(2);
    c = s[2];

    // �޸�Ԫ��
    s[2] = '3';

    // ����
    for (size_t i = 0; i < s.length(); ++i)
    {
        c = s[i];
    }

    for (auto itr = s.begin(); itr != s.end(); ++itr)
    {
        c = *itr;
    }

    // ɾ��Ԫ��
    s.pop_back();
    auto itr = s.begin() + 2;
    s.erase(itr);
}

