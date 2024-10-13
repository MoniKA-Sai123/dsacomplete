#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool anagram(string s,string t)
{
    //u can creat diff table also for each string then compare the each table
   int freqtable[256]={0};
   for(int i=0;i<s.size();i++)
   {
      freqtable[s[i]]++;
   }
   for(int i=0;i<t.size();i++)
   {
      freqtable[t[i]]--;
   }
   for(int i=0;i<256;i++)
   {
    if(freqtable[i]!=0)
    {
        return false;
    }

   }
   return true;
}
bool anagram1(string s,string t)
{
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
    if(s==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
string s="hri";
string t="ihr";
 bool ans=anagram(s,t);
 cout<<ans;
 cout<<endl;
 bool ans1= anagram1(s,t);
 cout<<ans1;
 return 0;
}