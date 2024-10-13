#include<iostream>
using namespace std;

bool isvowel(char ch)
{
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return true;
    }
    return false;
}

string reverseonlyvowels(string& s)
{
   int l=0;
   int h=s.size()-1;
   while(l<h)
   {
      if(isvowel(s[l]) && isvowel(s[h]))
      {
        swap(s[l],s[h]);
        l++;
        h--;
      }
      else if(!isvowel(s[l]))
      {
        l++;
      }
      else
      {
        h--;
      }
   }
   return s;
}
int main()
{
    string s="volobiiic";
    s=reverseonlyvowels(s);
    cout<<s;
    return 0;
    
}