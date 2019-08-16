#pragma once

/*!
*@brief        QtDemo
*@author       tangw  2019/08/16  15:25
*/

#include <QVector>

// 匹配结果项
struct MatchResultItem
{
    QVector<int> edoAs;
    QVector<int> edoBs;
};

class QTDemo
{
public:
    // 将结果转成string
    QString transResultToString();

private:
    QVector<MatchResultItem> matchResults;
};