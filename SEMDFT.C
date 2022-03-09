#include <stdio.h>
#include <conio.h>
#define MAX 10
int adj[MAX][MAX];
int visited[MAX],i,j,e,n,v1,v2,ch;
void read()
{
printf("1.Directed graph \n2.Undrected graph");
printf("\nEnter your choice :");
scanf("%d",&ch);
printf("Enter the no of nodes :");
scanf("%d",&n);
for(i=1; i<=n; i++)
for(j=1; j<=n; j++)
adj[i][j]=0;
printf("Enter the no of edges :");
scanf("%d",&e);
while(e>0)
{
scanf("%d %d",&v1,&v2);if(ch==1)
{adj[v1][v2]=1;
}
else
{
adj[v1][v2]=1;
adj[v2][v1]=1;
}
e--;
}
for(i=1; i<=n; i++)
visited[i]=0;
}
void dfs(int source)
{
visited[source]=1;
printf("\t%d",source);
for(i=1; i<=n; i++)
if(adj[source][i] && !visited[i])
dfs(i);
}

void main()
{
int source;
clrscr();
read();
printf("\nEnter the source :");
scanf("%d",&source);
printf("The nodes visited in the DFS order is :");dfs(source);
getch();
}