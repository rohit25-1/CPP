#include <iostream>

using namespace std;

template <class T>
class stack
{
    int top;
    class node
    {
    public:
        int data;
        node *next;
        node(int value)
        {
            data = value;
            next = NULL;
        };
    } *head = NULL;

    void insertBeg(T value)
    {
        if (head == NULL)
        {
            head = new node(value);
            return;
        }
        node *n = new node(value);
        n->next = head;
        head = n;
    }

    T deleteBeg()
    {
        T val = head->data;
        struct node *temp = head;
        head = head->next;
        delete temp;
        return val;
    }

public:
    stack()
    {
        top = -1;
    }
    void push(T value)
    {
        top++;
        insertBeg(value);
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Is Empty\n";
        }
        else
        {
            top--;
            deleteBeg();
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        return 0;
    }
    T peek()
    {
        return head->data;
    }

    int count()
    {
        return top + 1;
    }
};

int main()
{

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.count();
}