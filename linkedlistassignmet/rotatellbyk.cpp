#include<iostream>
using namespace std;

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
int findleng(Node first)
{
    int len=0;
    Node temp=first;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
        
    }
    return len;
}
Node rotatebyk(Node first,int k)
{
  
   if(!first) return 0;
    int len=findleng(first);
    int actuallen=(k%len);
    if(actuallen==0) return first;
  int newlastpos=len-actuallen-1;
  Node newlastnode=first;
  for(int i=0;i<newlastpos;i++)
  {
     newlastnode=newlastnode->next;
  }
  Node newhead=nullptr;
  newhead=newlastnode->next;
  Node it=newhead;
  newlastnode->next=NULL;
  while(it->next!=NULL)
  {
    it=it->next;
  }
  it->next=first;
  return newhead;
}
int main()
{
    Node firt=create(1);
    Node second=create(2);
    Node third=create(3);
    Node fourt=create(4);
    Node fifth=create(5);
    firt->next=second;
    second->next=third;
    third->next=fourt;
    fourt->next=fifth;
    traversal(firt);
    cout<<endl;
    Node ans=rotatebyk(firt,2);
    traversal(ans);
return 0;
}