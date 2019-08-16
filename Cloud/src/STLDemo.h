#pragma once

/*!
*@brief        stl����
*@author       tangw  2019/08/16  15:17
*/

#include <string>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <unordered_set>
#include <unordered_map>

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

private:
    vector<MatchResultItem> matchResults;
};