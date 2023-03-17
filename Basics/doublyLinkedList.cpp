#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }


};


void deleteNode(node* &head,int value)
{
    node* temp=head;
    node* deleteEle;
    while(temp->data!=value  && temp!=NULL)
    {
        temp=temp->next;

    }
    deleteEle=temp;
    if(temp!=head)
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    if(temp==head)
    {
        head=temp->next;
    }
    delete deleteEle;
}

void insertTail(node* &head,int value)
{
    
    node* n=new node(value);
    if(head==NULL)
    {
        head=n; 
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    temp->next->prev=temp;

}

void insertHead(node* &head,int value)
{
    if(head==NULL)
    {
        insertTail(head,value);
        return;
    }
    node* n=new node(value);
    n->next=head;
    head->prev=n;
    head=n;

}

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";

        head=head->next;
    }
    // while(head!=NULL)
    // {
    //     cout<<head->data<<"->";
    //     head=head->prev;
    // }
    cout<<"NULL"<<endl;
}


int main()
{

    node* head=NULL;
    
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertHead(head,100);
    display(head);
    deleteNode(head,100);
    display(head);
    return 0;
}