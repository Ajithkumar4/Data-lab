#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,n,temp,a[20];
clrscr();
printf("Enter the Number of elements :");
scanf("%d",&n);
printf("Enter the elements one by one :");
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=n-1; i>0; i--)
for(j=0; j<i; j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("The sorted element :");
for(i=0; i<n; i++)
{
printf("\t%d",a[i]);
}
getch();
}
