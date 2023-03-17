#include<stdio.h>


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int arr[],int n)
{   
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        swap(&arr[i],&arr[min]);
    }

}

int main()
{
    int arr[]={2,11,9,8,5,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

}