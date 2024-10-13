// //  #include<stdio.h>
// //  #include<conio.h>
// // #include<stdlib.h>
// // // // // // struct node
// // // // // // {
// // // // // //   int data;
// // // // // //   struct node*link;
// // // // // // };
// // // // // // typedef struct node*n;
// // // // // // n insertf(n);
// // // // // // n insertr(n);
// // // // // // n delf(n);
// // // // // // n delr(n);
// // // // // // n getnode();
// // // // // // void display(n);
// // // // // // int main()
// // // // // // {
// // // // // //   int o;
// // // // // //   n f=NULL;
// // // // // //   while(1)
// // // // // //   {
// // // // // //     printf("double queueu:");
// // // // // //     printf("1.Entry res\n2.Exit res\n3.display\n4.exit");
// // // // // //     scanf("%d",&o);
// // // // // //     switch(o)
// // // // // //     {
// // // // // //       case 1:printf("1.Insertr\n2.delf\n3.delr");
// // // // // // 	    scanf("%d",&o);
// // // // // // 	    switch(o)
// // // // // // 	    {
// // // // // // 	     case 1:f=insertr(f);
// // // // // // 		    getch();
// // // // // // 		    break;
// // // // // // 	     case 2:f=delf(f);
// // // // // // 		    getch();
// // // // // // 		    break;
// // // // // // 	     case 3:f=delr(f);
// // // // // // 		    getch();
// // // // // // 		    break;
// // // // // // 	     default:printf("invalid choice:");
// // // // // // 	    }
// // // // // // 	    break;
// // // // // //       case 2:printf("1.Delf\n2.insertf\n3.insertr:");
// // // // // // 	      scanf("%d",&o);
// // // // // // 	    switch(o)
// // // // // // 	    {
// // // // // // 	     case 1:f=delf(f);
// // // // // // 		    getch();
		  
// // // // // // 		    break;
// // // // // // 	     case 2:f=insertf(f);
// // // // // // 		    getch();
	
// // // // // // 		    break;
// // // // // // 	     case 3:f=insertr(f);
// // // // // // 		    getch();
		  
// // // // // // 		    break;
// // // // // // 	     default:printf("invalid choice:");
// // // // // // 	    }
// // // // // // 	break;
// // // // // // 	case 3:display(f);
// // // // // // 	       getch();
// // // // // // 	       break;
// // // // // // 	case 4:exit(0);
// // // // // // 	default:printf("invalid:");
// // // // // //       }
// // // // // //     }
// // // // // // }
// // // // // // n getnode()
// // // // // // {
// // // // // //   n temp;
// // // // // //   temp=malloc(sizeof(struct node));
// // // // // //   temp->link=NULL;
// // // // // //   return temp;
// // // // // // }
// // // // // // n insertf(n f)
// // // // // // {
// // // // // //   n temp;
// // // // // //   int item;
// // // // // //   temp=getnode();
// // // // // //    printf("enter the data:");
// // // // // //    scanf("%d",&item);
// // // // // //    printf("%d sucessfully inserted at front:",item);
// // // // // //    temp->link=f;
// // // // // //    f=temp;
// // // // // //   return f;
// // // // // // }
// // // // // // n insertr(n f)
// // // // // // {
// // // // // //   n temp,prev;
// // // // // //   int item;
// // // // // //   temp=getnode();
// // // // // //   printf("Enter the item:");
// // // // // //   scanf("%d",&item);
// // // // // //   printf(" %d successfully inserted at r:",item);
// // // // // //   if(f==NULL)
// // // // // //   {
// // // // // //     f=temp;
// // // // // //     return f;
// // // // // //   }
// // // // // //   prev=f;
// // // // // //   while(prev->link!=NULL)
// // // // // //   {
// // // // // //    prev=prev->link;
// // // // // //   }
// // // // // //   prev->link=temp;
// // // // // //   return f;
// // // // // // }

// // // // // // n delf(n f)
// // // // // // {
// // // // // //   n temp;
// // // // // //   printf("%d delted at fromt:",f->data);
// // // // // //   if(f==NULL)
// // // // // //   {
// // // // // //    printf("empty:");
// // // // // //    return f;
// // // // // //   }
// // // // // //   temp=f;
// // // // // //   f=f->link;
  
// // // // // //   return f;
// // // // // // }
// // // // // // n delr(n f)
// // // // // // {
// // // // // //   n prev,next;
// // // // // //   if(f==NULL)
// // // // // //   {
// // // // // //    printf("empty:");
// // // // // //    return f;
// // // // // //   }
// // // // // //   if(f->link==NULL)
// // // // // //   {
 
// // // // // //    printf("delted %d:",f->data);
// // // // // //      f=NULL;
// // // // // //    return f;
// // // // // //   }
// // // // // //   prev=f;
// // // // // //   next=f->link;
// // // // // //   while(next->link!=NULL)
// // // // // //   {
// // // // // //    prev=next;
// // // // // //    next=next->link;
// // // // // //   }
// // // // // //   printf("%d delelted:",next->data);
// // // // // //   prev->link=NULL;
// // // // // //   return f;
// // // // // // }
// // // // // // void display(n f)
// // // // // // {
// // // // // //  n temp;
// // // // // //   if(f==NULL)
// // // // // //   {
// // // // // //     printf("no elele:");
// // // // // //     return ;
// // // // // //   }
// // // // // //   temp=f;
// // // // // //   while(temp!=NULL)
// // // // // //   {
// // // // // //     printf("%d ",temp->data);
// // // // // //     temp=temp->link;
// // // // // //   }
// // // // // // }

// // // // // #include<stdio.h>
// // // // // #include<ctype.h>
// // // // // #include<stdlib.h>
// // // // // #include<math.h>

// // // // // struct node
// // // // // {
// // // // //    int data;
// // // // //    struct node*lchild;
// // // // //    struct node*rchild;
// // // // // };
// // // // // typedef struct node*N;
// // // // // N creattree(char postfix[]);
// // // // // float eval(N);
// // // // // N root=0;

// // // // // int main()
// // // // // {
// // // // //   char postfix[200];
// // // // //   float ans;
// // // // //   printf("enter postfix");
// // // // //   scanf("%s",postfix);
// // // // //   root=creattree(postfix);
// // // // //   ans=eval(root);
// // // // //   printf("%f",ans);
// // // // //   return 0;
// // // // // }

// // // // // N creattree(char postfix[200])
// // // // // {
// // // // //   N temp,stack[20];
// // // // //   char symbol;
// // // // //   int i=0,j=0;
// // // // //   for(i=0;(symbol=postfix[i])!='\0';i++)
// // // // //   {
// // // // //     temp=(N)malloc(sizeof(struct node));
// // // // //     temp->lchild=temp->rchild=0;
// // // // //     temp->data=symbol;
// // // // //     if(isalnum(symbol))
// // // // //     {
// // // // //       stack[j++]=temp;
// // // // //     }
// // // // //     else
// // // // //     {
// // // // //       temp->rchild=stack[--j];
// // // // //       temp->lchild=stack[--j];
// // // // //       stack[j++]=temp;
// // // // //     }
// // // // //   }
// // // // // return stack[--j];
// // // // //   }

// // // // // float eval(N root)
// // // // // {
// // // // //   float num;
// // // // //   switch(root->data)
// // // // //   {
// // // // //     case '+':return eval(root->lchild)+eval(root->rchild);
// // // // //     case '-':return eval(root->lchild)-eval(root->rchild);
// // // // //     case '*':return eval(root->lchild)*eval(root->rchild);
// // // // //     case '/':return eval(root->lchild)/eval(root->rchild);
// // // // //     case '^':return pow(eval(root->lchild),eval(root->rchild));
// // // // //     default:if(isalpha(root->data))   
// // // // //     {
// // // // //       printf("enter the val of %d",root->data);
// // // // //       scanf("%f",&num);
// // // // //       return(num);


// // // // //     }
// // // // //     else
// // // // //     return (root->data-'0');
// // // // // }
// // // // // }

// // // // #include<stdio.h>
// // // // #include<conio.h>
// // // // #include<math.h>
// // // // #include<stdlib.h>
// // // // #include<ctype.h>


// // // // struct node
// // // // {
// // // //   int data;
// // // //   struct node*lchild;
// // // //   struct node*rchild;
// // // // };
// // // // typedef struct node*nod;

// // // // nod create(char postfix[]);
// // // // float eval(nod);
// // // // nod root=0;

// // // // int main()
// // // // {
// // // //   char post[200];
// // // //   float anss;
// // // //   printf("enter postfix");
// // // //   scanf("%s",post);
// // // //   root=create(post);
// // // //   anss=eval(root);
// // // //   printf("%f",anss);
// // // //   return 0;
// // // // }
// // // // nod create(char post[])
// // // // {
// // // //   int i=0,j=0;
// // // //   nod temp,stack[20];
// // // //   char symbol;
// // // //   for(i=0;(symbol=post[i])!='\0';i++)
// // // //   {
// // // //      temp=(nod)malloc(sizeof(struct node));
// // // //      temp->lchild=temp->rchild=0;
// // // //     temp->data=symbol;
// // // //     if(isalnum(symbol))
// // // //     {
// // // //       stack[j++]=temp;
// // // //     }
// // // //     else
// // // //     {
// // // //       temp->rchild=stack[--j];
// // // //       temp->lchild=stack[--j];
// // // //       stack[j++]=temp;
// // // //     }
// // // //   }
// // // //   return stack[--j];

// // // // }
// // // // float eval(nod root)
// // // // {
// // // //   float num;
// // // //   switch(root->data)
// // // //   {
// // // //     case '+':return eval(root->lchild)+eval(root->rchild);
// // // //     case '-':return eval(root->lchild)-eval(root->rchild);
// // // //         case '*':return eval(root->lchild)*eval(root->rchild);
// // // //             case '/':return eval(root->lchild)/eval(root->rchild);
// // // //                 case '^':return pow(eval(root->lchild),eval(root->rchild));
// // // //                 default:if(isalpha(root->data))
// // // //                 {
// // // //                   printf("enter the val of %c",root->data);
// // // //                   scanf("%f",&num);
// // // //                   return(num);
// // // //                 }
// // // //                 else
// // // //                 {
// // // //                   return (root->data-'0');
// // // //                 }




// // // //   }
// // // // }

// // // #include<stdio.h>
// // // #include<conio.h>

// // // // int main()
// // // // {
// // // //   int a1[100],a2[100],a3[100],res,i,n;
// // // //   printf("enter the n");
// // // //   scanf("%d",&n);
// // // //   for(int i=0;i<n;i++)
// // // //   {
// // // //     scanf("%d",&a1[i]);
// // // //   }
// // // //   for(int i=0;i<n;i++)
// // // //   {
// // // //     res=a1[i]%10;
// // // //     a3[res]=a2[i]=a1[i];
// // // //     printf("location a3[%d] is %d\n",res,a3[res]);
// // // //   }
// // // //   printf("hash table");
// // // //   for(i=0;i<n;i++)
// // // //   {
// // // //     printf("%d ",a2[i]);
// // // //   }
// // // //   return 0;
// // // // }

// // // int main()
// // // {
// // //    int a[100],a1[100],a2[100],res,i,n;
// // //    scanf("%d",&n);
// // //    for(int i=0;i<n;i++)
// // //    {
// // //     scanf("%d",&a[i]);
// // //    }
// // //    for(int i=0;i<n;i++)
// // //    {
// // //      res=a[i]%10;
// // //      a1[res]=a2[i]=a[i];
// // //      printf("loc:a1[%d]:%d",res,a1[res]);
// // //    }
// // //    for(int i=0;i<n;i++)
// // //    {
// // //     printf("%d ",a2[i]);
// // //    }
// // //    return 0;
// // // }


// // int fact(int n)
// // {
// //   if(n==1||n==0)
// //   {
// //     return n;
// //   }
// //   return n*fact(n-1);
// // }
// // int binomial(int n,int k)
// // {
// //   if(k==0||k==n)
// //   {
// //     return 1;
// //   }
// //   return binomial(n-1,k-1)+binomial(n-1,k);
// //   }
// // int ans(int a,int b)
// // {
// //   if(b==0)
// //   return a;

// //   return ans(b,a%b);
// // }
// // int fib(int n)
// // {
// //   if(n==1||n==0)
// //   {
// //     return n;
// //   }
// //   return fib(n-1)+fib(n-2);
// // }
// // void tower(int n,char s,char d,char t)
// // {
// //   if(n>0)
// //   {
// //     tower(n-1,s,t,d);
// //     printf("%d from %c to %c",n,s,d);
// //     tower(n-1,t,d,s);
// //   }
// // }
// // int main()
// // {
// //   int n;
// //   int a,b;
// //  printf("enter the n");
// //   scanf("%d",&n);
// // //  scanf("%d %d",&a,&b);
// // //  printf("binomial(%d,%d)=%d",a,b,binomial(a,b));
// // //  printf("%d fac is %d",n,fact(n));
// // //  printf("%d",ans(a,b));

// // for(int i=0;i<n;i++)
// // {
// //   printf("%d ",fib(i));
// // }
// // tower(n,'s','d','t');
// //  return 0;
// // }


// #include<stdio.h>

// void linears(int arr[],int s,int index,int key)
// {
//   if(index>s)
//   {
//     printf("no elele");
//     return ;
//   }
//   if( arr[index]==key)
//   {
//     printf("found at %d",index+1);
//     return ;
//   }
//   linears(arr,s,index+1,key);
// }
// void binarysearch(int arr[],int high,int low,int k)
// {
//   if(low>=high)
//   {
//     printf("no elem");
//     return; 
//   }
//   int mid=(high+low)/2;
//   if(arr[mid]==k)
//   {
//     printf("found %d",mid+1);
//     return ;
//   }
//   if(arr[mid]>k)
//   {
   
//     binarysearch(arr,mid+1,low,k);
//   }
//   else
//   {
//     binarysearch(arr,high,mid+1,k);
//   }
  
  

// }
// int main()
// {
//   int arr[5]={11,2,3,4,5};
//   binarysearch(arr,4,0,4);
//   return 0;
// }



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int length=0,h=0,i=0,j=0,top=-1;
char symbol,infix[200],postfix[100],stack[100];
void infixtoprefix();
int preceed(char);
int main()
{
  int len=0;
   printf("enter the infix expression");
   scanf("%s",infix);
   len=strlen(infix)-1;
   for(h=0;h<=len/2;h++)
   {
    char temp;
    temp=infix[h];
    infix[h]=infix[len-h];
    infix[len-h]=temp;
   }
   for(h=0;h<strlen(infix);h++)
   {
    if(infix[h]=='(')
    {
      infix[h]=')';
    }
    else if(infix[h]==')')
    {
      infix[h]='(';
    }
   }
 infixtoprefix();
 printf("the prefix expression is:");
 for(h=strlen(postfix)-1;h>=0;h--)
 {
     printf("%c",postfix[h]);
 }  

}

void push(char symbol)
{
stack[++top]=symbol;
return;
}
char pop()
{
 return stack[top--];
}
void infixtoprefix()
{
  char temp;
  length=strlen(infix);
  push('#');
  while(i<length)
  {
    symbol=infix[i];
    switch(symbol)
    {
      case '(':
                push(symbol);
                break;
      case ')':
               temp=pop();
               while(temp!='(')
               {
                postfix[j++]=temp;
                temp=pop();


               }
               break;
          case '/':
          case '*':
          case '+':
          case '-':
                   while(preceed(stack[top])>preceed(symbol))
                   {
                    temp=pop();
                    postfix[j++]=temp;
                   }
                   push(symbol);
                   break;
                  default:
                           postfix[j++]=symbol;
    }
    i++;
    }

  while(top>0)
  {
     postfix[j++]=pop();
  }
  //postfix[j]='\0';
}
int preceed(char symbol)
{
  int p;
  switch(symbol)
  {
    case '^':p=3;   
             break;
    case '*':
    case '/':p=2;
              break;
      case '+':
      case '-':
               p=1;
              break;
          case '(':
         case ')':
                   p=0;
                   break;
                  case '#':p=-1;
                  break;
  }
  return p;
  }
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int length=0, h=0, i=0, j=0, top=-1;
// char symbol, infix[200], postfix[100], stack[100];

// void infixtoprefix();
// int preceed(char);
// void push(char);
// char pop();

// int main() {
//     int len=0;
//     printf("Enter the infix expression: ");
//     scanf("%s", infix);
//     len = strlen(infix) - 1;

//     // Reverse the infix expression
//     for(h = 0; h <= len / 2; h++) {
//         char temp;
//         temp = infix[h];
//         infix[h] = infix[len - h];
//         infix[len - h] = temp;
//     }

//     // Replace '(' with ')' and vice versa
//     for(h = 0; h < strlen(infix); h++) {
//         if(infix[h] == '(') {
//             infix[h] = ')';
//         } else if(infix[h] == ')') {
//             infix[h] = '(';
//         }
//     }

//     infixtoprefix();

//     printf("The prefix expression is: ");
//     for(h = strlen(postfix) - 1; h >= 0; h--) {
//         printf("%c", postfix[h]);
//     }
//     return 0;
// }

// void push(char symbol) {
//     stack[++top] = symbol;
// }

// char pop() {
//     return stack[top--];
// }

// void infixtoprefix() {
//     char temp;
//     length = strlen(infix);
//     push('#');
//     while(i < length) {
//         symbol = infix[i];
//         switch(symbol) {
//             case '(':
//                 push(symbol);
//                 break;
//             case ')':
//                 temp = pop();
//                 while(temp != '(') {
//                     postfix[j++] = temp;
//                     temp = pop();
//                 }
//                 break;
//             case '/':
//             case '*':
//             case '+':
//             case '-':
//                 while(preceed(stack[top]) > preceed(symbol)) {
//                     temp = pop();
//                     postfix[j++] = temp;
//                 }
//                 push(symbol);
//                 break;
//             default:
//                 postfix[j++] = symbol;
//         }
//         i++;
//     }

//     while(top > 0) {
//         postfix[j++] = pop();
//     }
//     postfix[j] = '\0';  // Null-terminate the postfix expression
// }

// int preceed(char symbol) {
//     int p;
//     switch(symbol) {
//         case '^': p = 3; break;
//         case '*':
//         case '/': p = 2; break;
//         case '+':
//         case '-': p = 1; break;
//         case '(': 
//         case ')': p = 0; break;
//         case '#': p = -1; break;
//         default: p = 0; // In case of invalid operator
//     }
//     return p;
// }
