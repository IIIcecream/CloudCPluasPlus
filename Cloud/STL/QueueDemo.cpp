#include "QueueDemo.h"

#include <queue>
using std::queue;

void QueueDemo::demo()
{
    queue<int> myQueue;

    // ����Ԫ��
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // ��ȡ���ס���βԪ��
    myQueue.front();
    myQueue.back();

    // ��ȡԪ�ظ���
    myQueue.size();

    // ������ͬstack ��֧�ֱ���

    // ɾ��Ԫ��
    myQueue.pop();
}

