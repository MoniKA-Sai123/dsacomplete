#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
int pivot(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        int leftsum=0;
        int rightsum=0;
       for(int j=0;j<i;j++)
       {
        leftsum=leftsum+arr[j];
       }
       for(int j=i+1;j<s;j++)
       {
        rightsum=rightsum+arr[j];
       }
       if(leftsum==rightsum)
       {
        return i;
       }
    }
    return -1;
}
int optimized(int arr[],int size)
{
    vector<int>left(size,0);
    vector<int>right(size,0);
    for(int i=1;i<size;i++)
    {
      left[i]=left[i-1]+arr[i-1];
    }
    for(int i=size-2;i>=0;i--)
    {
        right[i]=right[i+1]+arr[i+1];
    }
    for(int i=0;i<size;i++)
    {
        if(left[i]==right[i])
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int arr[]={2,4,5,6,10};
    int size=sizeof(arr)/sizeof(int);
    int index=optimized(arr,size);
    cout<<index;
    return 0;
}