#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
typedef struct node*tree;
tree createnode(int);
tree insert(tree,int);
tree find(tree,int);
tree findmin(tree);
tree findmax(tree);
tree deletenode(tree,int);
void inorder(tree);
void main()
{
tree root=NULL;
tree temp;
int choice,element;
clrscr();
while(choice<7)
{
clrscr();
printf("1.Insert \n2.Display \n3.Find \n4.Findmin \n5.Findmax \n6.Delete \n7.Exit \nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter element to insert :");
scanf("%d",&element);
root=insert(root,element);
break;
case 2:
printf("List of element :");
inorder(root);
break;
case 3:
printf("Enter element to fin :");
scanf("%d",&element);
temp=find(root,element);
if(temp!=NULL)
printf("The element is = %d",temp->data);
else
printf("Element not found");
break;
case 4:
temp=findmin(root);
printf("The minimum element is : %d",temp->data);
break;
case 5:
temp=findmax(root);
printf("The maximum element is : %d",temp->data);
break;
case 6:
printf("Enter the element to delete :");
scanf("%d",&element);
root=deletenode(root,element);
break;
}
getch();
}
}
tree createnode(int value)
{
tree newNode=malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
tree insert(tree root,int data)
{
if(root==NULL)
return createnode(data);
if(data<root->data)
root->left=insert(root->left,data);
else if(data>root->data)
root->right=insert(root->right,data);
return root;
}
void inorder(tree root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%d->",root->data);
inorder(root->right);
}
tree findmin(tree t)
{
tree minnode=t;
while(minnode->left!=NULL)
minnode=minnode->left;
return minnode;
}
tree findmax(tree t)
{
tree maxnode=t;
while(maxnode->right!=NULL)
maxnode=maxnode->right;
return maxnode;
}
tree find(tree t,int key)
{
tree temp=t;
if(t==NULL)
return NULL;
if(key<t->data)
temp=find(t->left,key);
else if(key>t->data)
temp=find(t->right,key);
return temp;
}
tree deletenode(tree root,int key)
{
tree temp;
if(root==NULL)
return root;
if(key<root->data)
root->left=deletenode(root->left,key);
else if(key>root->data)
root->right=deletenode(root->right,key);
else
{
if(root->left==NULL)
{
tree temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL)
{
tree temp=root->left;
free(root);
return temp;
}
temp=findmin(root->right);
root->data=temp->data;
root->right=deletenode(root->right,temp->data);
}
return root;
}