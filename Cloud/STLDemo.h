#pragma once

/*!
*@brief        stl����
*@author       tangw  2019/08/16  15:17
*/

#include <string>
#include <vector>

using namespace std;

// ƥ������
struct MatchResultItem
{
    vector<int> edoAs;
    vector<int> edoBs;
};


class STLDemo
{
public:
    // �����ת��string
    string transResultToString();

    // ��string�����ɽ��
    void transStringToResult(string sResult);
private:
    vector<MatchResultItem> matchResults;
};