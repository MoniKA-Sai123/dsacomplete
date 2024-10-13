#include<iostream>
using namespace std;

void movenegative(int arr[],int size )
{
  int l=0;
  int h=size-1;
   while(l<=h)
   {
    if(arr[l]<0)
    {
        l++;
    }
    else if(arr[h]>0)
    {
        h--;
    }
    else
    {
        swap(arr[l],arr[h]);
    }
   }
}
int main()
{
     int arr[]={1,-5,3,-6,-8,-6};
     int size=sizeof(arr)/sizeof(int);
      for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     movenegative(arr,size);
     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }
}
