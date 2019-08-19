#include "STLDemo.h"
#include <vector>
using std::vector;

std::string STLDemo::transResultToString()
{
    vector<string> sItemList;

    for each(MatchResultItem const& oItem in matchResults)
    {
        string sItem;

        // ÷˜…Û
        for each(int nID in oItem.edoAs) sItem += (char)('0' + nID) + ',';

        if (sItem.back() == ',') sItem[sItem.length() - 1] = ':';
        else sItem.push_back(':');

        // ÀÕ…Û
        for each(int nID in oItem.edoBs) sItem += (char)('0' + nID) + ',';
        
        if (sItem.back() == ',') sItem.pop_back();

        sItemList.push_back(sItem);
    }

    string sResult;
    for each (string sItem in sItemList)
    {
        sResult += '\"' + sItem + '\"' + ',';
    }
    if (!sResult.empty()) sResult.pop_back();

    return sResult;
}

