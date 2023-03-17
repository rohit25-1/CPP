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

void insertLast(node* &head,int value)
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
void makeCycle(node* head,int val)
{
    node* temp=head;
    node* ele;
    while(temp->next!=NULL)
    {
        if(temp->data==val)
        {
            ele=temp;
        }
        temp=temp->next;
    }
    temp->next=ele;
}

bool isCycle(node* head)
{
    node* hare=head;
    node* tortoise=head;
        
    while(hare!=NULL && hare->next!=NULL)
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
        if(hare==tortoise)
        {
            return true;
        }
        
    }
    return false;

    
}

void clearCycle(node* head)
{

    node* hare=head;
    node* tortoise=head;
        
    do
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
    }while(hare!=tortoise);

    hare=head;
    while(hare->next!=tortoise->next)
    {
        hare=hare->next;
        tortoise=tortoise->next;

    }
    tortoise->next=NULL;

}

void reverse(node* &head)
{

    node* prev=NULL;
    node* curr=head;
    node* next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}


node* kreverse(node* head,int k)
{

    node* prev=NULL;
    node* current=head;
    node* next;
    int ctr=0;
    while(current!=NULL && ctr<k)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        ctr++;

    }
    if(next!=NULL)
    {
    node* prevhead=kreverse(next,k);
    head->next=prevhead;
    } 
    
    return prev;

}

    


void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertLast(head,1); 
    insertLast(head,2); 
    insertLast(head,3); 
    insertLast(head,4); 
    insertLast(head,5); 
    insertLast(head,6); 
    display(head);
    // reverse(head);
    // display(head);
    // node* newhead=kreverse(head,2);
    // display(newhead);
    cout<<isCycle(head)<<endl;
    makeCycle(head,4);
    cout<<isCycle(head)<<endl;
    clearCycle(head);
    cout<<isCycle(head)<<endl; 
    display(head);   

    return 0;
}