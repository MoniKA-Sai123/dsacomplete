// #include<stdio.h>
// #include<conio.h>
// struct node
// {
//     int data;
//     struct node*rchild;
//     struct node*lchild;
// };
// typedef struct node*typnode;

// typnode create(typnode root)
// {
//     typnode prev,temp,newnode;
//     int k,n;
//     printf("ENter the no of nodes:");
//     scanf("%d",&n);
//     printf("Enter the nodes:");
//     for(k=1;k<=n;k++)
//     {
//         newnode=(typnode)malloc(sizeof(struct node));
//         newnode->lchild=newnode->rchild=NULL;
//         printf("Enter node data");
//         scanf("%d",&newnode->data);
//         if(root==NULL)
//         {
//             root=newnode;
//         }else{
//       temp=root;
//       while(temp!=NULL)
//       {
//         prev=temp;
//         if(newnode->data<temp->data)
//         {
//             temp=temp->lchild;
//         }
//         else 
//         {
//             temp=temp->rchild;
//         }
//       }
//       if(newnode->data<prev->data)
//       {
//         prev->lchild=newnode;
//       }
//       else
//       {
//         prev->rchild=newnode;
//       }
//         }
//     }
// return root;
// }
// typnode insert(typnode root,int val)
// {
   
//     if (root == NULL) {
//         typnode newNode = (typnode)malloc(sizeof(struct node));
//         // if (newNode == NULL) {
//         //     printf("Memory allocation failed\n");
//         //     exit(1);
//         // }
//         newNode->data = val;
//         newNode->lchild = newNode->rchild = NULL;
//         return newNode;
//     }
//    else if(root->data>val)
//    {
//      root->lchild= insert(root->lchild,val);
//    }else
//    {
//     root->rchild=insert(root->rchild,val);
//    }
//    return root;
// }
// void inorder(typnode root)
// {
   
//     if(root!=NULL)
//     {
//        inorder(root->lchild);
//        printf("%d",root->data);
//        inorder(root->rchild);
//     }
// }

// int main()
// {
//    typnode root=NULL;
//    root=insert(root,34);
//    root=insert(root,38);
//    root=insert(root,90);
//    inorder(root);
//    return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// struct node
// {
//   int data;
//   struct node*rchild;
//   struct node*lchild;
// };
// typedef struct node*NODE;

// NODE getnode();
// int is_lchild(NODE);
// int is_rchild(NODE);
// void create(NODE);
// NODE root=NULL;
// void inorder(NODE);
// // void preorder(NODE);
// // void postorder(NODE);

// int main()
// {
//    printf("tree traversal:");
//    printf("enter the root data");
//    root=getnode();
//    scanf("%d",&root->data);
//    create(root);
//    printf("inorder\n");
//    inorder(root);
//   //  printf("preorder\n");
//   //  preorder(root);
//   //  printf("postorder");
//   //  postorder(root);
//    return 0;

// }

// NODE getnode()
// {
//    NODE temp;
//    temp=(NODE)malloc(sizeof(struct node));
//    temp->rchild=temp->lchild=NULL;
//    return temp;
// }
// void create(NODE root)
// {
   
//    if(is_lchild(root))
//    {
//       root->lchild=getnode();
//       printf("enter the data");
//       scanf("%d",&root->lchild->data);
//       create(root->lchild);
//    }
//    if(is_rchild(root))
//    {
//     root->rchild=getnode();
//     printf("enter the data");
//     scanf("%d",&root->rchild->data);
//     create(root->rchild);
//    }

// }
// int is_lchild(NODE root)
// {
//   int ch;
//   printf("want lchild to %d",root->data);
//   scanf("%d",&ch);
//   if(ch)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }

// int is_rchild(NODE root)
// {
//   int ch;
//   printf("want rchild to %d",root->data);
//   scanf("%d",&ch);
//   if(ch)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }

// void inorder(NODE root)
// {
//   if(root!=NULL)
//   {
//     inorder(root->lchild);
//     printf("%d ",root->data);
//     inorder(root->rchild);
//   }
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// struct node
// {
//   int data;
//   struct node*llink;
//   struct node*rlink;
// };
// typedef struct node*NODE;

// NODE getnode();
// void create(NODE);
// int islc(NODE);
// int isrc(NODE);
// NODE root=NULL;
// void inorder(NODE);

// int main()
// {
//   printf("tree traversal");
//   printf("enter root");
//   root=getnode();
//   scanf("%d",&root->data);
//   create(root);
//   inorder(root);
//   return 0;
// }

// NODE getnode()
// {
//   NODE temp;
//   temp=(NODE)malloc(sizeof(struct node));
//   temp->llink=temp->rlink=NULL;
//   return temp;
// }

// void create(NODE root)
// {
//   if(islc(root))
//   {
//     root->llink=getnode();
//     printf("enter data");
//     scanf("%d",&root->llink->data);
//     create(root->llink);
//   }
//   if(isrc(root))
//   {
//     root->rlink=getnode();
//     printf("enter data");
//     scanf("%d",&root->rlink->data);
//     create(root->rlink);
//   }
// }

// int islc(NODE root)
// {
//   int ch;
//   printf("1 :0");
//   scanf("%d",&ch);
//   if(ch)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }

// int isrc(NODE root)
// {
//   int ch;
//   printf("1 :0");
//   scanf("%d",&ch);
//   if(ch)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }

// void inorder(NODE root)
// {
//   if(root!=NULL)
//   {
//     inorder(root->llink);
//     printf("%d",root->data);
//     inorder(root->rlink);
//   }
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left,*right;
};
typedef struct node*N;

N create(N root)
{
    N temp,prev,newnode;
    int k,n;
    printf("enter n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        newnode=(N)malloc(sizeof(struct node));
        newnode->left=newnode->right=NULL;
        printf("enter data");
        scanf("%d",&newnode->data);
        if(root==NULL)
        {
            root=newnode;
        }
        else
        {
        temp=root;
        while(temp!=NULL)
        {
            prev=temp;
            if(newnode->data<temp->data)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        if(newnode->data<prev->data)
            {
                prev->left=newnode;
            }
            else
            {
                prev->right=newnode;
            }
    }
    }
    return root;
}

void inorder(N root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
int main()
{
    N root=NULL;
    root=create(root);
    inorder(root);
    return 0;
}
