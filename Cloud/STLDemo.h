#pragma once

/*!
*@brief        stl容器
*@author       tangw  2019/08/16  15:17
*/

#include <string>
#include <vector>

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

    // 将string解析成结果
    void transStringToResult(string sResult);
private:
    vector<MatchResultItem> matchResults;
};