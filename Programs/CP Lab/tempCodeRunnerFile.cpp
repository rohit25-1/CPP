#include <iostream>

using namespace std;

#define MAX 100

class stack
{
    char arr[MAX];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(char num)
    {
        top++;
        arr[top] = num;
    }

    char pop()
    {
        char temp = arr[top];
        top--;
        return temp;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
};

void print(stack s)
{
    while (!s.isEmpty())
    {
        printf("%c ", s.pop());
    }
}


int main()
{
    string str;
    stack st;
    cout << "Enter The String: ";
    cin>>str;
    int i=0;
    while(str[i])
        st.push(str[i++]);
    print(st);
}