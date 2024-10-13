#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int compress(string& s)
{
 char prev=s[0];
    int count=1,index=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==prev)
        {
            count++;
        }
        else
        {
            s[index++]=prev;
            if(count>1)
            {
                int start=index;
                while(count)
                {
                    s[index++]=count%10+'0';
                    count/=10;
                }
                reverse(s.begin()+start,s.begin()+index);

            }
             prev=s[i];
        count++;

        }
       
    }
     s[index++]=prev;
            if(count>1)
            {
                int start=index;
                while(count)
                {
                    s[index++]=count%10+'0';
                    count/=10;
                }
                reverse(s.begin()+start,s.begin()+index);

}
return index;
}
int main()
{
   string s={"aaabbbcccd"};
  int ans=compress(s);
  cout<<s;
  return 0;

}

