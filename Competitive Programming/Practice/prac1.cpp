#include<iostream>
using namespace std;

int rotateClockwise(int *arr,int insertEle,int pos,int n)
{
    int finEle=arr[n-1];
    int temp=arr[pos];
    arr[pos]=insertEle;
    
    for(int i=pos;i<n-1;i++)
    {

        int temp2=arr[i+1];
        arr[i+1]=temp;
        temp=temp2;
    }
    return finEle;
}

void rotateAntiClockwise(int *arr,int insertElement,int m,int pos)
{
    for(int i=pos;i<m-1;i++)
    {
        if(arr[i+1]>insertElement)
        {
            arr[i]=insertElement;
            break;
        }
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n=4,m=5;
        for(int i=0;i<n;i++)
	    {
	            int j=0;
	        while(arr2[j]<arr1[i] && i<n && j<m)
	        {
	            int element=rotateClockwise(arr1,arr2[j],i,n);
	            rotateAntiClockwise(arr2,element,m,j);
	            
	        }
	    }
	    
	   
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr1[i]<<" ";
	    }
	    cout<<endl;
	     for(int i=0;i<m;i++)
	    {
	        cout<<arr2[i]<<" ";
	    }
}