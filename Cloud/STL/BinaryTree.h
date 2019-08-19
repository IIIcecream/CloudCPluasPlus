#pragma once

/*!
*@brief        ¶þ²æÊ÷
*@author       tangw  2019/08/19  17:53
*/


struct TreeNode
{
    TreeNode(int n) : nVal(n), pLeft(nullptr), pRight(nullptr) {}

    int nVal;
    TreeNode *pLeft;
    TreeNode *pRight;
};

class BinaryTree
{
public:
    void demo();
};
