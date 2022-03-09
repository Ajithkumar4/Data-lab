#include <stdio.h>
#include <conio.h>
void main()
{
int i,k,t,n,x,a[30];
clrscr();
printf("Enter the Number of elements :");
scanf("%d",&n);
printf("Enter the elements one by one :");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(k=0; k<n; k++)
{
t=a[k];
for(i=k-1; i>=0; i--)
if(a[i]>t)
{
a[i+1]=a[i];
a[i]=t;
}
}
printf("The sorted element :");
for(i=0; i<n; i++)
{
printf("\t%d",a[i]);
}
getch();
}
