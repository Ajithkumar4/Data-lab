#include <stdio.h>
#include <conio.h>
int a[20],find=0,x;
void main()
{
int i,n;
clrscr();
printf("\nEnter the size : ");
scanf("%d",&n);
printf("\nEnter the elements one by one :");
for(i=0; i<n; i++)
scanf("%d",&a[i]);
printf("\nEnter the element to be searched :");
scanf("%d",&x);
for (i=0; i<n; i++)
if(a[i]==x)
{
printf("\nThe element %d is at %d",x,i+1);
find++;
}
if(find==0)
printf("\nThe given element %d is not in the array",x);
getch();
}