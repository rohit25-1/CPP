#include<stdio.h>



int f(int n)
{
    if(n<=1)
    {
        return 1;
    }
    if(n%2==0)
    {
        return f(n/2);
    }
    return f(n/2)+f(n/2+1);
}

int main()
{
    for(int i=1;i<=50;i++)
        printf("%d ",f(i));
}