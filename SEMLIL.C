#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int element;
struct node*next;
};
typedef struct node*list;
list head=NULL,ptr=NULL;
void insert(int,int);
void del(int);
list find(int);
list findprevious(int);
void print();
void main()
{
int choice=0,x,p;
list t=NULL;
while(choice<5)
{
clrscr();
printf("\n1.Insert \n2.Delete \n3.Find \n4.Print \n5.Exit \nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the position and value :");
scanf("%d %d",&p,&x);
insert(p,x);
break;
case 2:
printf("Enter the element to delete :");
scanf("%d",&x);
del(x);
break;
case 3:
printf("Enter the element to find :");
scanf("%d",&x);
t=find(x);
if(t!=NULL)
printf("Element found at %d",t->element);
else
printf("Element not found");
getch();
break;
case 4:
print();
break;
}
getch();
}
}
void insert(int po,int v)
{
list newnode;
int i;
ptr=head->next;
newnode=malloc(sizeof(struct node));
newnode->element=v;
newnode->next=NULL;
if(po==1)
{
newnode->next=head->next;
head->next=newnode;
}
else
{
for(i=1; i<po-1 && ptr->next!=NULL; i++)
{
ptr=ptr->next;
}
newnode->next=ptr->next;
ptr->next=newnode;
}
}
void del(int v)
{
list fp;
ptr=head->next;
if(ptr->element==v)
{
head->next=head->next->next;
free(ptr);
}
else
{
fp=findprevious(v);
if(fp!=NULL)
{
ptr=fp->next;
fp->next=fp->next->next;
free(ptr);
}
}
}
list find(int v)
{
ptr=head->next;
while(ptr!=NULL)
{
if(ptr->element==v)
return ptr;
ptr=ptr->next;
}
return NULL;
}
list findprevious(int v)
{
ptr=head->next;
while(ptr->next!=NULL)
{
if(ptr->next->element==v)
return ptr;
ptr=ptr->next;
}
return NULL;
}
void print()
{
ptr=head->next;
while(ptr!=NULL)
{
printf("%d->",ptr->element);
ptr=ptr->next;
}
}