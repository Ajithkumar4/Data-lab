#include <stdio.h>
#include <conio.h>
int a[10];
int currentsize=0;
void insert(int,int);
void del(int);
int find(int);
void print();
void main()
{
int choice=0,p,x;
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
p=find(x);
printf("Element found at %d",p);
break;
case 4:
print();
break;
}
getch();
}
}
void insert(int po,int x)
{
int i=currentsize;
while(po<=i)
{
a[i]=a[i-1];
i--;
}
a[i]=x;
currentsize=currentsize+1;
}
void del(int x)
{
int i,po;
po=find(x);
if(po!=-1)
{
i=po;
while(i<currentsize)
{
a[i-1]=a[i];
i++;
}
currentsize=currentsize-1;
}
else
printf("Element not found");
}
int find(int x)
{
int i=0;
while(i<currentsize && a[i]!=x)
{
i=i+1;
}
if(i==currentsize)
{
return-1;
}
else
{
return(i+1);
}
}
void print()
{
int i;
for(i=0; i<currentsize; i++)
printf("%d\n",a[i]);
}
