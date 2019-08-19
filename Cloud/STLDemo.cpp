#include "STLDemo.h"
#include <vector>
using std::vector;

std::string STLDemo::transResultToString()
{
    vector<string> sItemList;

    for each(MatchResultItem const& oItem in matchResults)
    {
        string sItem;

        // ����
        for each(int nID in oItem.edoAs) sItem += (char)('0' + nID) + ',';

        if (sItem.back() == ',') sItem[sItem.length() - 1] = ':';
        else sItem.push_back(':');

        // ����
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
    //�Ƚ�Ҫ�и���ַ�����string����ת��Ϊchar*����
    char * strs = new char[str.length() + 1]; //��Ҫ����
    strcpy(strs, str.c_str());

    char * d = new char[delim.length() + 1];
    strcpy(d, delim.c_str());

    char *p = strtok(strs, d);
    while (p) {
        string s = p; //�ָ�õ����ַ���ת��Ϊstring����
        res.push_back(s); //����������
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

