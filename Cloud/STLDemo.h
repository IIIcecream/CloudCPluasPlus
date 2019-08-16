#pragma once

/*!
*@brief        stl容器
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

// 匹配结果项
struct MatchResultItem
{
    vector<int> edoAs;
    vector<int> edoBs;
};


class STLDemo
{
public:
    // 将结果转成string
    string transResultToString();

private:
    vector<MatchResultItem> matchResults;
};