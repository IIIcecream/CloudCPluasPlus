#include "STLDemo.h"
#include <vector>
using std::vector;

std::string STLDemo::transResultToString()
{
    vector<string> sItemList;

    for each(MatchResultItem const& oItem in matchResults)
    {
        string sItem;

        // 主审
        for each(int nID in oItem.edoAs) sItem += (char)('0' + nID) + ',';

        if (sItem.back() == ',') sItem[sItem.length() - 1] = ':';
        else sItem.push_back(':');

        // 送审
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

vector<string> split(const string& str, const string& delim) {
    vector<string> res;
    if ("" == str) return res;
    //先将要切割的字符串从string类型转换为char*类型
    char * strs = new char[str.length() + 1]; //不要忘了
    strcpy(strs, str.c_str());

    char * d = new char[delim.length() + 1];
    strcpy(d, delim.c_str());

    char *p = strtok(strs, d);
    while (p) {
        string s = p; //分割得到的字符串转换为string类型
        res.push_back(s); //存入结果数组
        p = strtok(NULL, d);
    }

    return res;
}

void STLDemo::transStringToResult(string sResult)
{
    vector<string> sList = split(sResult, ",");

    for each(string const& sItem in sList)
    {
        int nInex = sItem.find(':');
        if (nInex == -1) continue;

        string sLeft = sItem.substr(0, nInex);
        string sRight = sItem.substr(nInex + 1);

    }
}

