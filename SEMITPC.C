#include <stdio.h>
#include <conio.h>
int maxsize=10;
char stack[10];
int sp=-1;
void push(char);
char pop();
int priority(char);
void main()
{
char expr[20],t;
int x,i;
clrscr();
printf("Enter the expression :");
scanf("%s",expr);
for(i=0; i<strlen(expr); i++)
{
if(isalpha(expr[i]))
printf("%c",expr[i]);
else if(expr[i]=='(')
push(expr[i]);
else if(expr[i]==')')
{
while(stack[sp]!='(')
{
printf("%c",pop());
}
t=pop();
}
else
{
while(priority(stack[sp])>=priority(expr[i]))
	printf("%c",pop());
push(expr[i]);
}
}
while(sp!=-1)
{
printf("%c",pop());
}
getch();
}
int priority(char x)
{
if(x=='=')
return 1;
if(x=='+' || x=='-')
return 2;
if(x=='*' || x=='/')
return 3;
else
return -1;
}
void push(char x)
{
if(sp<maxsize-1)
stack[++sp]=x;
else
{
printf("Stack full");
getch();
}
}
char pop()
{
char x;
if(sp!=-1)
{
x=stack[sp];
sp--;
return x;
}
else
{
return NULL;
}
}
