#pragma once

/*!
*@brief        QtDemo
*@author       tangw  2019/08/16  15:25
*/

#include <QVector>

// ƥ������
struct MatchResultItem
{
    QVector<int> edoAs;
    QVector<int> edoBs;
};

class QTDemo
{
public:
    // �����ת��string
    QString transResultToString();

private:
    QVector<MatchResultItem> matchResults;
};