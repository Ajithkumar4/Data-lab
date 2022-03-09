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
void enqueue(int);
list dequeue();
void print();
void main()
{
int choice=0,p,x;
while(choice<4)
{
clrscr();
printf("\n1.Enqueue \n2.Dequeue \n3.Print \n4.Exit \nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value :");
scanf("%d",&x);
enqueue(x);
break;
case 2:
ptr=dequeue();
if(ptr!=NULL)
{
printf("The dequeued element is %d",ptr->element);
free(ptr);
}
break;
case 3:
print();
break;
}
getch();
}
}
void enqueue(int v)
{
list newnode;
ptr=head->next;
newnode=malloc(sizeof(struct node));
newnode->element=v;
newnode->next=NULL;
if(head->next==NULL)
head->next=newnode;
else
{
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=newnode;
}
}
list dequeue()
{
if(head->next!=NULL)
{
ptr=head->next;
head->next=head->next->next;
return ptr;
}
else
{
printf("Queue Empty");
return NULL;
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