#include<iostream>
using namespace std;
#include<vector>

void removeduplicatefromsortedarray(int arr[],int n)
{
    vector<int>ans;
    ans.push_back(arr[0]);
    //int temp;
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(ans[j]!=arr[i])
        {
            // temp=arr[i];
            // ans.push_back(temp);
            ans.push_back(arr[i]);
            j++;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    for(int i=0;i<ans.size();i++)
    {
        arr[i]=ans[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
void twopointerapproach(int a[],int n)
{
    int j=0,i=1;
    while(i<n)
    {
        if(a[i]==a[j])
        {
            i++;
        }
       else
       {
        j++;
        a[j]=a[i];
        i++;
       }
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    //vector<vector<int>>matrix={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30}};
    //spiralprint(matrix);
    cout<<endl;
    int arr[]={0,0,1,1,2,2,2,3,3,4,5,6,7};
    removeduplicatefromsortedarray(arr,(sizeof(arr)/sizeof(int)));
    cout<<endl;
    twopointerapproach(arr,(sizeof(arr)/sizeof(int)));

    return 0;
}