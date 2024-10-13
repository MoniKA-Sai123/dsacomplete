#include<iostream>
using namespace std;
#include<algorithm>

int duplicate(int arr[],int s)
{
    sort(arr,arr+s);
    for(int i=0;i<s;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
return -1;
}
int withnegativemarkapproach(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int index=arr[i];
        if(arr[index]<0)
        {
            return index;
        }
        else
        {
           arr[index]*=-1;
        }
    }
    return -1;
}
int methodthree(int arr[],int size)
{
    
    while(arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}
int main()
{
    int arr[]={1,5,6,5,4,4,2};
    int size=sizeof(arr)/sizeof(int);
    int ans=duplicate(arr,size);
    cout<<ans;
    cout<<endl;
    int asn1=withnegativemarkapproach(arr,size);
    cout<<asn1;
    int ans3=methodthree(arr,size);
    cout<<endl;
    cout<<ans3;
}
