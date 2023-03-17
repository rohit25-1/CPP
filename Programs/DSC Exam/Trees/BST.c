/*  Tree is a non linear data structure.

    Root: The root node is the topmost node in the tree hierarchy. In other words, the root node is the one that doesn't have any parent. In the above structure, node numbered 1 is the root node of the tree. If a node is directly linked to some other node, it would be called a parent-child relationship.
    Child node: If the node is a descendant of any node, then the node is known as a child node.
    Parent: If the node contains any sub-node, then that node is said to be the parent of that sub-node.
    Sibling: The nodes that have the same parent are known as siblings.
    Leaf Node:- The node of the tree, which doesn't have any child node, is called a leaf node. A leaf node is the bottom-most node of the tree. There can be any number of leaf nodes present in a general tree. Leaf nodes can also be called external nodes.
    Internal nodes: A node has atleast one child node known as an internal
*/

// left child 2*i+1 and right child is 2*i+2

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

int BSTvalue;

struct node *createNode(int num)
{
  struct node *n;
  n = (struct node *)(malloc(sizeof(struct node)));
  n->data = num;
  n->right = NULL;
  n->left = NULL;
  return n;
}

void insertBST(struct node *head, int num)
{
  struct node *n;
  if (num >= head->data)
  {
    if (head->right == NULL)
    {
      n = createNode(num);
      head->right = n;
      return;
    }
    else
    {
      insertBST(head->right, num);
    }
  }
  else
  {
    if (head->left == NULL)
    {
      n = createNode(num);
      head->left = n;
      return;
    }
    else
    {
      insertBST(head->left, num);
    }
  }
}


int main()
{
  struct node *head;
  int num, temp = 8;
  head = createNode(8);
  insertBST(head, 1);
  insertBST(head, 9);
  insertBST(head, 7);
  insertBST(head, 5);
  insertBST(head, 14);
}