#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

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

}

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head)
{
    int ctr=0;
    while(head!=NULL)
    {
        ctr++;
        head=head->next;
    }
    return ctr;
}

node* mergeSort(node* head1,node* head2)
{
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummy1=new node(-1);
    node* dummy=dummy1;
    while(ptr2!=NULL && ptr1!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            dummy->next=ptr1;
            ptr1=ptr1->next;
            dummy=dummy->next;
        }
        else
        {
            dummy->next=ptr2;
            ptr2=ptr2->next;
            dummy=dummy->next;

        }
    }
    while(ptr2!=NULL)
        {
            dummy->next=ptr2;
            ptr2=ptr2->next;
            dummy=dummy->next;
        }
    while(ptr1!=NULL)
    {
        dummy->next=ptr1;
        ptr1=ptr1->next;
        dummy=dummy->next;
    }
    return dummy1->next;

}


int main()
{
    node* head=NULL;
    node* head2=NULL;
    insertTail(head,1);
    insertTail(head,4);
    insertTail(head,5);
    insertTail(head,7);
    insertTail(head2,2);
    insertTail(head2,3);
    insertTail(head2,6);
    display(head);
    display(head2);
    node* headSorted=mergeSort(head,head2);
    display(headSorted);


    return 0;
}