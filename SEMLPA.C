#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int coef;
int exp;
struct node*next;
};
typedef struct node*list;
list create(list);
list add(list,list,list);
void printlist(list);
void main()
{
list p1,p2,p3;
int coef,exp;
p1=create(p1);
p2=create(p2);
clrscr();
printf("\nPolinomial one :");
printlist(p1);
printf("\nPolinomial two :");
printlist(p2);
p3=add(p3,p1,p2);
printf("\nSum of polinomial : ");
printlist(p3);
getch();
}
list create(list l1)
{
int i=0,c,e,n;
list newnode,l2;
printf("Enter the Numberof nodes :");
scanf("%d",&n);
while(i<n)
{
printf("Enter the Coef and Exp :");
scanf("%d %d",&c,&e);
newnode=malloc(sizeof(struct node));
newnode->coef=c;
newnode->exp=e;
newnode->next=NULL;
if(i==0)
{
l1=newnode;
l2=newnode;
}
else
{
l1->next=newnode;
l1=newnode;
}
i++;
}
return l2;
}
list add(list l,list l1,list l2)
{
list l3,newnode;
int i=0;
while(l1!=NULL && l2!=NULL)
{
newnode=malloc(sizeof(struct node));
newnode->next=NULL;
if(l1->exp>l2->exp)
{
newnode=l1;
l1=l1->next;
}
else if(l2->exp>l1->exp)
{
newnode=l2;
l2=l2->next;
}
else
{
newnode->coef=l1->coef+l2->coef;
newnode->exp=l1->exp;
l1=l1->next;
l2=l2->next;
}
if(i==0)
{
l=newnode;
l3=l;
i++;
}
else
{
l->next=newnode;
l=newnode;
}
}
if(l1!=NULL)
l->next=l1;
if(l2!=NULL)
l->next=l2;
return l3;
}
void printlist(list l1)
{
while(l1!=NULL)
{
printf("%d %d->",l1->coef,l1->exp);
l1=l1->next;
}
}



