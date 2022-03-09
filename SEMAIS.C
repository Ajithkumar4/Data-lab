#include <stdio.h>
#include <conio.h>
int maxsize=10;
int stack[10];
int sp=-1;
void push(int);
int pop();
void print();
void main()
{
int choice=0,p,x;
while(choice<4)
{
clrscr();
printf("1.push \n2.pop \n3.print \n4.exit \nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value :");
scanf("%d",&x);
push(x);
break;
case 2:
x=pop();
if(x!=NULL)
printf("The poped element is %d",x);
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
for(i=0; i<=sp; i++)
printf("%d\n",stack[i]);
}
void push(int x)
{
if(sp<maxsize-1)
stack[++sp]=x;
else
{
printf("Stack Full");
getch();
}
}
int pop()
{
int x;
if(sp!=-1)
{
x=stack[sp];
sp--;
return x;
}
else
{
printf("Stack Empty");
return NULL;
}
}