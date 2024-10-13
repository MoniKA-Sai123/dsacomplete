#include<iostream>


using namespace std;
#include<vector>
#include<algorithm>
void sortcolo(vector<int>&a,int size)
{
      int zero=0;
      int one=0;
      int two=0;
      for(int i=0;i<size;i++)
      {
        if(a[i]==0)
        {
            zero++;
        }
        else if(a[i]==1)
        {
            one++;

        }
        else if(a[i]==2)
        {
            two++;
        }
      }
    
    //   for(int i=0;i<zero;i++)
    //   {
    //      a[i]=0;
    //   }
    //   for(int i=zero;i<zero+one;i++)
    //   {
    //     a[i]=1;
    //   }
    //   for(int i=zero+one;i<size;i++)
    //   {
    //     a[i]=2;
    //    }
       int i=0;
       while(zero--)
       {
         a[i]=0;
         i++;
       }
       while(one--)
       {
        a[i]=1;
        i++;
       }
       while(two--)
       {
        a[i]=2;
        i++;
       }

}
void threepointerapproch(vector<int>&n,int size)
{
    int l=0,m=0,h=size-1;
    while(m<=h)
    {
        if(n[m]==0)
        {
            swap(n[m],n[l]);
            l++;
            m++;
        }
        else if(n[m]==1)
        {
            m++;
        }
        else 
        {
            swap(n[m],n[h]);
          
            h--;
        }
    }
}
int main()
{
    vector<int>v={0,1,2,2,1,0};
    //sortcolo(v,v.size());
    //threepointerapproch(v,v.size());
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        
    }

}