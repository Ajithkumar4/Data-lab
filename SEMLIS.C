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
void push(int);
list pop();
void print();
void main()
{
int choice=0,x,p;
while(choice<4)
{
clrscr();
printf("\n1.Push \n2.Pop \n3.Print \n4.Exit \nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value :");
scanf("%d",&x);
push(x);
break;
case 2:
ptr=pop();
if(ptr!=NULL)
{
printf("The poped element is %d",ptr->element);
free(ptr);
}
getch();
break;
case 3:
print();
break;
}
getch();
}
}
void push(int v)
{
list newnode;
int i;
newnode=malloc(sizeof(struct node));
newnode->element=v;
newnode->next=head->next;
head->next=newnode;
}
list pop()
{
if(head->next==NULL)
{
printf("Stack Empty");
return NULL;
}
else
{
ptr=head->next;
head->next=head->next->next;
return(ptr);
}
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
