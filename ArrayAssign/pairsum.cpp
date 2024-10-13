#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
#include<algorithm>

//pairsum 
//bruthforce 
bool pairsumbruthforce(int arr[],int size,int key)
{
   for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        if((arr[i]+arr[j])==key)
        {
            return true;
        }
    }
   }
   return false;
}


bool optimised(int arr[],int s,int key)
{
   sort(arr,arr+s);
  int l=0;
  int h=s-1;
  while(l<h)
  {
    int sum=arr[l]+arr[h];
    if(sum==key)
    {
        return true;
    }
    else if(sum>key)
    {
        h--;
    }
    else if(sum<key)
    {
        l++;
    }
  }
  return false;

}
int main()
{
    int arr[]={1,4,6,74,6,88};
    vector<int>v={1,4,6,74,6,88};
    int key=900;
    // bool ans=pairsumbruthforce(arr,6,key);
    // cout<<ans;
    bool ans=optimised(arr,6,key);
    cout<<ans;

}