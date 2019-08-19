#include "BinaryTree.h"

void BinaryTree::demo()
{
    TreeNode *pRoot;

    int arr[] = { 3, 5, 7, 2, 9, 6 };
    // ������������
    for (int i = 0; i < 6; ++i)
    {
        if (!pRoot) pRoot = new TreeNode(arr[i]);
        else
        {
            TreeNode *p = pRoot;
            while (p)
            {
                if (p->nVal < arr[i])
                {
                    if (p->pRight) p = p->pRight;
                    else
                    {
                        p->pRight = new TreeNode(arr[i]);
                        break;
                    }
                }
                else
                {
                    if (p->pLeft) p = p->pLeft;
                    else
                    {
                        p->pLeft = new TreeNode(arr[i]);
                        break;
                    }
                }
            }
        }
    }

    // ����
    int num = 5;
    TreeNode *p = pRoot;
    while (p)
    {
        if (p->nVal == num) break;  // �ҵ�
        if (p->nVal < num) p = p->pRight;
        else p = p->pLeft;
    }
    if (!p)
    {
        // û�ҵ�
    }
}

