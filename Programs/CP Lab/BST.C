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

int searchBST(struct node *head, int key)
{
  if (head == NULL)
    return 0;
  if (head->data == key)
    return 1;
  if (key >= head->data)
    return searchBST(head->right, key);
  return searchBST(head->left, key);
}

struct node* findElement(struct node *head)
{
  if (head->left == NULL)
  {
    BSTvalue=head->data;
    return NULL;
  }
  head->left=findElement(head->left);
  return head;

}

struct node *deleteBST(struct node *head, int key)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (key > head->data)
  {
    head->right = deleteBST(head->right, key);
  }
  else if (key < head->data)
  {
    head->left = deleteBST(head->left, key);
  }
  else
  {
    if (head->left == NULL && head->right == NULL)
      head = NULL;
    else if (head->left == NULL)
    {
      struct node *temp = head->right;
      free(head);
      return temp;
    }
    else if (head->right == NULL)
    {
      struct node *temp = head->left;
      free(head);
      return temp;
    }
    else
    {
      findElement(head->right);
      head->data=BSTvalue;
    }
  }
  return head;
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
  printf("%d\n", searchBST(head, 8));
  deleteBST(head, 8);
  printf("%d\n", searchBST(head, 8));
}