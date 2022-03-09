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
scanf("%d %d",&v1,&v2);if(ch==1){
adj[v1][v2]=1;
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
void bfs(int source)
{
int queue[MAX];
int i,front,rear,root;
front=rear=0;
visited[source]=1;
queue[rear++]=source;
printf("\t%d",source);
while(front!=rear)
{
root=queue[front];
for(i=1; i<=n; i++)
if(adj[root][i] && !visited[i])
{
visited[i]=1;
queue[rear++]=i;
printf("\t%d",i);
}
front++;
}
}
void main()
{
int source;
clrscr();
read();
printf("\nEnter the source :");
scanf("%d",&source);
printf("The nodes visited in the BFS order is :");
bfs(source);
getch();
}

