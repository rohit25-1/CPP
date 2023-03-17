#include <bits/stdc++.h>
using namespace std;
// keep traversing till you find null and then only insert;
// left small
// right bigger or equal
class node
{

public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void insertBST(node *head, int num)
{
    if (num >= head->data)
    {
        if (head->right == NULL)
        {
            node *n = new node(num);
            head->right = n;
            return;
        }
        else
            insertBST(head->right, num);
    }
    else
    {
        if (head->left == NULL)
        {
            node *n = new node(num);
            head->left = n;
            return;
        }
        else
            insertBST(head->left, num);
    }
}

void insertBSTNormal(node *head, int num)
{
    while (1)
    {
        if (num >= head->data)
        {
            if (head->right == NULL)
            {
                node *n = new node(num);
                head->right = n;
                break;
            }
            else
                head = head->right;
        }
        else
        {
            if (head->left == NULL)
            {
                node *n = new node(num);
                head->left = n;
                break;
            }
            else
                head = head->left;
        }
    }
}

bool searchBST(node *head, int key)
{

    while (1)
    {
        if (head == NULL)
            return false;
        if (key == head->data)
            return true;
        if (head->data <= key)
            head = head->right;
        else
            head = head->left;
    }
}

int main()
{
    node *head = new node(8);
    insertBSTNormal(head, 5);
    insertBSTNormal(head, 4);
    insertBSTNormal(head, 6);
    insertBSTNormal(head, 9);
    cout << searchBST(head, 14);

    return 0;
}