#include <stdio.h>
#include <conio.h>
int maxsize=3;
int queue[3];
int front=-1;
int rear=-1;
void enqueue(int);
int dequeue();
void print();
void main()
{
int choice=0,p,x;
while(choice<4)
{
clrscr();
printf("1.Enqueue \n2.Dequeue \n3.Print \n4.Exit \nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value :");
scanf("%d",&x);
enqueue(x);
break;
case 2:
x=dequeue();
if(x!=NULL)
printf("The dequeued element is %d",x);
break;
case 3:
print();
break;
}
getch();
}
}
void print()
{
int i;
for(i=front; i<=rear; i++)
printf("%d\n",queue[i]);
}
void enqueue(int x)
{
if(rear<maxsize-1)
{
rear=rear+1;
queue[rear]=x;
if(front==-1);
front=0;
}
else
printf("Queue Full");
}
int dequeue()
{
int x;
if(front>-1&&front<=rear)
{
x=queue[front];
front=front+1;
return x;
}
else
{
printf("Queue Empty");
return NULL;
}
}

