#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

int length(node *head)
{
    int ctr = 0;
    while (head != NULL)
    {
        ctr++;
        head = head->next;
    }
    return ctr;
}

void insertKnodes(node *&head, int k)
{
    int len = length(head) - k;
    node *temp = head;
    node *ele;
    int ctr = 1;
    while (ctr < len)
    {
        temp = temp->next;
        ctr++;
    }
    ele = temp;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head = ele->next;
    ele->next = NULL;
}

void insertFirst(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertLast(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void appendZero(node *head, int num)
{

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    int ctr = 1;

    while (ctr <= num)
    {
        node *n = new node(0);
        temp->next = n;
        temp = n;
        ctr++;
    }
}

node *funct(node *l1, node *l2)
{
    node *prev = new node(0);
    int carryOver = 0;
    node *head = prev;
    int len1 = length(l1);
    int len2 = length(l2);
    if (len1 > len2)
    {
        appendZero(l2, (len1 - len2));
    }
    else if(len2>len1)
    {
        appendZero(l1, (len2 - len1));
    }
    // display(l1);
    // display(l2);
    while (l1 != NULL)
    {
        int sum = l1->data + l2->data +carryOver;
        if (l1->next == NULL && (l1->data+l2->data)!=0)
        {
            while (sum != 0)
            {
                int temp2 = sum % 10;
                node *nextEle = new node(temp2);
                sum = sum / 10;
                prev->next = nextEle;
                prev = nextEle;
            }
            break;
        }
        // if (sum>= 10)
        // {
            int temp = (sum) % 10;
            node *nextEle = new node(temp);
            carryOver = ((sum) / 10) % 10;
            l1 = l1->next;
            l2 = l2->next;
            prev->next = nextEle;
            prev = nextEle;
        // }
        // else
        // {
        //     node *nextEle = new node((sum));
        //     if (carryOver != 0)
        //         carryOver--;
        //     prev->next = nextEle;
        //     prev = nextEle;
        //     l1 = l1->next;
        //     l2 = l2->next;
        // }
    }
    return head->next;
}

int main()
{
    node *l1 = NULL;
    node *l2 = NULL;
    insertLast(l1,2);
    insertLast(l1,4);
    insertLast(l1,9);
    insertLast(l2, 6);
    insertLast(l2, 4);
    insertLast(l2, 9);
    node *l3 = funct(l1, l2);
    display(l3);
    // insertLast(head,1);
    // insertLast(head,2);
    // insertLast(head,3);
    // insertLast(head,4);
    // insertLast(head,5);
    // insertLast(head,6);
    // display(head);
    // insertKnodes(head,6);
    // display(head);
}