#include<iostream>
using namespace std;
#include<conio.h>

int missfromduplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int index=abs(arr[i]);
        if(arr[index-1]>0)
        {
            arr[index-1]*=-1;

        }
    }
        for(int i=0;i<size;i++)
        {
            if(arr[i]>0)
            {
               cout<<i+1<<" ";
            }
        }
    }
int main()
{
    int arr[]={1,2,2,2,4};
    int size=sizeof(arr)/sizeof(int);
    missfromduplicate(arr,size);
    cout<<"hello"<<endl;
    cout<<"hello"<<endl;
    cout<<"hello endl"<<endl;
    cout<<"hhh"<<endl;
    //cout<<endkl; 
    //cout<<endkl;
    //cout<<endl;
    cout<<"monik";
    cout<<"mm";
    cout<<"monik"<<endl;
    cout<<""<<endl;
    cout<<endl;
//    dear students lab at 11:30;

//
//
//
//monika
 

}
