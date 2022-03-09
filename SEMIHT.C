#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10
void main()
{
int a[MAX],key,num,i,cont;
int create(int);
void linearprobing(int[],int,int);
void display(int[]);
for(i=0; i<MAX; i++)
a[i]=-1;
do
{ clrscr();
printf("Enter the number :");
scanf("%d",&num);
key=create(num);
linearprobing(a,key,num);
printf("\nEnter 0 to quit and 1 to continue :");
scanf("%d",&cont);
}
while(cont==1);
display(a);
}
int create(int num)
{
int key;
key=num%10;
return key;
}
void linearprobing(int a[MAX],int key,int num)
{
int flag=0,count=0,i;
if(a[key]==-1)
a[key]=num;
else
{
while(i<num)
{
if(a[i]!=-1)
count++;
i++;
if(count==MAX)
printf("Hash is full");
}
for(i=key+1; i<MAX; i++)
{
if(a[i]==-1)
a[i]=num;
flag=1;
break;
}
for(i=0; i<key && flag==0; i++)
{
if(a[i]==-1)
a[i]=num;
flag=-1;
break;
}
}
}
void display(int a[MAX])
{
int i;
printf("\nThe hash table is :\n");
for(i=0; i<MAX; i++)
{
printf("\n%d\t\t%d",i,a[i]);
}
getch();
}