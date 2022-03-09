#include <stdio.h>
#include <conio.h>
int maxsize=10;
int stack[10];
int sp=-1;
void push(int);
int pop();
void main()
{
char expr[20];
int i,a,b;
clrscr();
printf("Enter the postfix expression :");
scanf("%s",expr);
for(i=0; i<strlen(expr); i++)
{
if(isdigit(expr[i]))
push(expr[i]-48);
else
{
b=pop();
a=pop();
switch(expr[i])
{
case '+':
push(a+b);
break;
case '-':
push(a-b);
break;
case '*':
push(a*b);
break;
case '/':
push(a/b);
break;
}
}
}
printf("%d",pop());
getch();
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