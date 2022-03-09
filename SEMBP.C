#include <stdio.h>
#include <conio.h>
int maxsize=10;
int stack[10];
int sp=-1;
void push(int);
int pop();
void main()
{
int i;
char expr[20];
clrscr();
printf("Enter the expression :");
gets(expr);
for(i=0; i<strlen(expr); i++)
{
if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{')
push(expr[i]);
else if(expr[i]==')' && pop()=='(');
else if(expr[i]==']' && pop()=='[');
else if(expr[i]=='}' && pop()=='{');
else if(expr[i]!=')' && expr[i]!=']' && expr[i]!='}')
{
}
else
{
printf("Unbalanced");
getch();
exit(0);
}
}
if(sp==-1)
printf("Balanced");
getch();
}
void push(int x)
{
if(sp<maxsize-1)
stack[++sp]=x;
else
{
printf("Stack full");
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
printf("Stack empty");
return NULL;
}
}
