#include<iostream>
using namespace std;
#include<string.h>
void reverseonlyleters(string& s)
{
    cout<<s<<endl;
    int l=0;
    int h=s.size()-1;
    while(l<h)
    {
        if(isalpha(s[l]) && isalpha(s[h]))
        {
            swap(s[l],s[h]);
            l++;
            h--;
        }
        else if(!isalpha(s[l]))
        {
            l++;
        }
        else
        {
            h--;
        }
    }

}

int main()
{
    string s="leet1ng-code=hel2";
    reverseonlyleters(s);
    cout<<endl<<s;
    return 0;
}