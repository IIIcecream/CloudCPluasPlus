#include "StackDemo.h"

#include <stack>
using std::stack;

void StackDemo::demo()
{
    stack<int> myStack;

    // ���Ԫ��
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // ��ȡջ��Ԫ��
    myStack.top();

    // ��ȡջԪ������
    myStack.size();

    // �Ƴ�ջ��Ԫ��
    myStack.pop();

    // û��ֱ�ӱ�����ֻ������
    while (!myStack.empty())
    {
        int nTemp = myStack.top();
        myStack.pop();
    }

    // �п�
    myStack.empty();
}

