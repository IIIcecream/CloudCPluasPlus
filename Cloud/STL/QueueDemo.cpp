#include "QueueDemo.h"

#include <queue>
using std::queue;

// http://www.cplusplus.com/reference/queue/queue/?kw=queue
void QueueDemo::demo()
{
    queue<int> myQueue;

    // 插入元素
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // 获取队首、队尾元素
    myQueue.front();
    myQueue.back();

    // 获取元素个数
    myQueue.size();

    // 遍历，同stack 不支持遍历

    // 删除元素
    myQueue.pop();
}

