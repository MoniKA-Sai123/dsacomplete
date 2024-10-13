#include<iostream>
using namespace std;
#include<set>
#include<vector>
void insection(int A[],int B[],int C[],int n1,int n2,int n3)
{
     vector<int>ans;
     set<int>st;
     int i=0,j=0,k=0;
     while(i<n1 && j<n2 && k<n3)
     {
        if(A[i]==B[j] && B[j]==C[k])
        {
           st.insert(A[i]);
        }
        else if(A[i]<B[j])
        {
            i++;
        }
        else if(B[j]<C[k])
        {
            j++;
        }
        else{
            k++;
        }
     }
     for(auto i:st)
     {
       cout<<i<<" ";
     }
    
}
int main()
{
    int A[]={1,2,3,4,5};
    int B[]={2,3,4,5,20}; 
    int C[]={3,4,5,10,20};
    insection(A,B,C,5,5,5);
    return 0;
    
}

