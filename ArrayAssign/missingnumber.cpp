#include<iostream>

#include<algorithm>
#include<vector>
using namespace std;

int missingnumber(int arr[],int size)
{

    
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        if(i==arr[i])
        {
            continue;
        }
        else
        {
            return i;
        }
    }
    return size;
}
int xorapproach(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=0;i<=size;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{
    int arr[]={2,1,3,4};
    int size=sizeof(arr)/sizeof(int);
    int ans=missingnumber(arr,size);
    int ans1=xorapproach(arr,size);
    cout<<ans1<<endl;
    cout<<ans<<endl;
}













