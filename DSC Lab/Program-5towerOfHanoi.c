#include<stdio.h>

int ctr=0;

void TOH(int n,char source,char helper,char destination)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,source,destination,helper);
    ctr++;
    printf("Move %d from %c to %c\n",n,source,destination);
    TOH(n-1,helper,source,destination);

}

int main()
{
    TOH(3,'A','B','C');
    printf("%d\n",ctr);
}