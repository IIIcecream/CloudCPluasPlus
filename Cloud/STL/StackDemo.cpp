#include "StackDemo.h"

#include <stack>
using std::stack;

void StackDemo::demo()
{
    stack<int> myStack;

    // 添加元素
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // 获取栈顶元素
    myStack.top();

    // 获取栈元素数量
    myStack.size();

    // 移除栈顶元素
    myStack.pop();

    // 没法直接遍历，只能如下
    while (!myStack.empty())
    {
        int nTemp = myStack.top();
        myStack.pop();
    }

    // 判空
    myStack.empty();
}

