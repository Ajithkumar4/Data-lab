#include<stdio.h> 
#include<conio.h> 
int a[20],find=0,x; 
void main() 
{ 
int i,n,low,high,mid; 
clrscr(); 
printf("\nEnter the size\n"); 
scanf("%d",&n); 
printf("\nEnter the elements one by one\n"); 
for(i=0;i<n;i++) 
{ 
printf("\na[%d]=",i); 
scanf("%d",&a[i]); 
} 
printf("\nEnter the element to be searched :"); 
scanf("%d",&x);
low=0; 
high=n-1; 
while(low<=high) 
{ 
mid=(low+high)/2; 
if(x>a[mid]) 
low=mid+1; 
else if(x<a[mid]) 
high=mid-1; 
else 
{ 
printf("\nThe element %d is at position %d",x,mid); 
find++; 
break; 
} 
} 
if(find==0) 
printf("\nThe given element %d is not in the array",x); 
getch(); 
} 
