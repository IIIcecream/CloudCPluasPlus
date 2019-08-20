#include "MapSetDemo.h"

#include <map>
#include <set>
using std::map;
using std::set;

// http://www.cplusplus.com/reference/map/map/?kw=map
void MapSetDemo::mapDemo()
{
    map<int, int> myMap;

    // 添加元素
    myMap[1] = 1;
    myMap[2] = 2;
    myMap[3] = 3;

    // 获取元素，注意，当key值不存在时，下面这种获取方法会使得map中插入一条键值对
    myMap[1];

    // 判断key是否存在
    bool bExist = myMap.find(1) == myMap.end();
    bExist = myMap.count(1) > 0;

    // 获取元素个数
    myMap.size();

    // 遍历
    for (auto itr = myMap.begin(); itr != myMap.end(); ++itr)
    {
        int nKey = itr->first;
        int nValue = itr->second;
    }

    // 删除元素(key值）
    myMap.erase(2);

    // 使用迭代器删除
    auto itr = myMap.find(1);
    myMap.erase(itr);
}

// http://www.cplusplus.com/reference/set/set/?kw=set
void MapSetDemo::setDemo()
{
    // 与map类似
    set<int> mySet;

    // 添加元素
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);

    // 获取元素
    auto itr = mySet.find(2);

    // ...
}