#include<iostream>
using namespace std;
#include<vector>

void waveprint(int v[3][4])
{
    int m=3;
    int n=4;
    for(int i=0;i<n;i++)
    {
        if((i%2)==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[j][i]<<" ";
            }
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            {
                cout<<v[j][i]<<" ";
            }
        }
    }
    cout<<endl<<"zig zag print"<<endl;
    for(int i=0;i<m;i++)
    {
        if((i%2)==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v[i][j]<<" ";
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<v[i][j]<<" ";
            }
        }
    }

}
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    waveprint(arr);
}