#include<iostream>
using namespace std;
#include<vector>

struct node
{
    int data;
    node*next;
};
typedef struct node*Node;
Node create(int item)
{
    Node temp;
    temp=(Node)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;
    return temp;
}
void traversal(Node head)
{
    Node temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void merge2sortedlists(Node f,Node s)
{
    Node ans=create(-1);
    Node merge=ans;
    if(f==NULL)
    {
      ans->next=s;
      traversal(ans->next);
     
    }
    if(s==NULL)
    {
        ans->next=f;
        traversal(ans->next);
       
    }
    
    while(f && s)
    {
        if(f->data<=s->data)
        {
            merge->next=f;
            merge=f;
            f=f->next;
        }
        else
        {
            merge->next=s;
            merge=s;
            s=s->next;
        }

        if(f)
        {
            merge->next=f;
        }
        if(s)
        {
            merge->next=s;
        }
      
       
    }
     traversal(ans->next);
}
 vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>s;
     int i=0,j=0;
        if(m==0)
        {
         while(n>0)
        {
            s.push_back(nums2[j]);
                j++;
            n--;
        }
         for(auto i:s)
        {
            cout<<i<<" ";
        }
           return s;  
       
        }
        if(n==0)
        {
           
               while(m>0)
       {
           s.push_back(nums1[i]);
           i++;
           m--;
       }
            for(auto i:s)
        {
            cout<<i<<" ";
        }
           return s;
        }
        while(m>0 && n>0)
        {
            if(nums1[i]<=nums2[j])
            {
                s.push_back(nums1[i]);
                i++;
                m--;
            }
            else
            {
                s.push_back(nums2[j]);
                    j++;
                n--;
            }
            
        }
       while(m>0)
       {
           s.push_back(nums1[i]);
           i++;
           m--;
       }
        while(n>0)
        {
            s.push_back(nums2[j]);
                j++;
            n--;
        }
        cout<<endl;
        for(auto i:s)
        {
            cout<<i<<" ";
        }
           return s;
     
    }
int main()
{
    Node first=create(20);
    Node second=create(40);
    Node third=create(50);

    Node f=create(10);
    Node s=create(15);
    Node t=create(25);
    f->next=s;
    s->next=t;
    first->next=second;
    second->next=third;
    traversal(first);
    cout<<endl;
    traversal(f);
 cout<<endl;
 vector<int>arr={1,1,1,6,9};
 vector<int>arr2={4,8,90,100};
  merge(arr,5,arr2,4);
  Node sd;
  merge2sortedlists(first,f);
    return 0;
}

