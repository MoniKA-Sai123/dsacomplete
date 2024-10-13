#include<iostream>
#include<unordered_map>
using namespace std;

int firstrepeating(int arr[],int n)
{
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]>1)
        {
            cout<<arr[i]<<endl;
            return i+1;
        }
    }
}


int main()
{
   char ch[100];
   int w=0,c=0,d=0;
   cin.getline(ch,sizeof(ch));
   int i=0;
   while(ch[i]!='\0')
  {
    if(isalpha(ch[i]))
    {
      c++;
    }
    else if(isdigit(ch[i]))
    {
        d++;
    }
    else if(isspace(ch[i])&&!isspace(ch[i-1]))
    {
        w++;
    }
    i++;
  }
  if (!isspace(ch[sizeof(ch)-1]))

  {
    /* code */
    w++;
  }
  cout<<w<<d<<c;
  return 0;

}
