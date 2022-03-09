#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,t,u,n,a[20];
int selectposition;
int selectelement;
clrscr();
printf("Enter the Number of elements :");
scanf("%d",&n);
printf("Enter the elements one by one :");
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=n-1; i>0; i--)
{
selectposition=0;
selectelement=a[0];
for(j=1; j<=i; j++)
{
if(a[j]>selectelement)
{
selectelement=a[j];
selectposition=j;
}
}
a[selectposition]=a[i];
a[i]=selectelement;
}
printf("The sorted element is :");
for(i=0; i<n; i++)
printf("\t%d",a[i]);
getch();
}