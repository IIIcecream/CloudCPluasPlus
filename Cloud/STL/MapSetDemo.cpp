#include "MapSetDemo.h"

#include <map>
#include <set>
using std::map;
using std::set;

// http://www.cplusplus.com/reference/map/map/?kw=map
void MapSetDemo::mapDemo()
{
    map<int, int> myMap;

    // ���Ԫ��
    myMap[1] = 1;
    myMap[2] = 2;
    myMap[3] = 3;

    // ��ȡԪ�أ�ע�⣬��keyֵ������ʱ���������ֻ�ȡ������ʹ��map�в���һ����ֵ��
    myMap[1];

    // �ж�key�Ƿ����
    bool bExist = myMap.find(1) == myMap.end();
    bExist = myMap.count(1) > 0;

    // ��ȡԪ�ظ���
    myMap.size();

    // ����
    for (auto itr = myMap.begin(); itr != myMap.end(); ++itr)
    {
        int nKey = itr->first;
        int nValue = itr->second;
    }

    // ɾ��Ԫ��(keyֵ��
    myMap.erase(2);

    // ʹ�õ�����ɾ��
    auto itr = myMap.find(1);
    myMap.erase(itr);
}

// http://www.cplusplus.com/reference/set/set/?kw=set
void MapSetDemo::setDemo()
{
    // ��map����
    set<int> mySet;

    // ���Ԫ��
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);

    // ��ȡԪ��
    auto itr = mySet.find(2);

    // ...
}