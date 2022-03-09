#include <stdio.h>
#include <conio.h>
#define MAX 100
int adj[MAX][MAX];
int n;
void main()
{
int max_edges,i,j,origin,destin;
int graph_type;
clrscr();
printf("Enter 1 for undirected graph \nEnter 2 for Directed graph");
printf("\nEnter your choice :");
scanf("%d",&graph_type);
printf("Enter number of vertices :");
scanf("%d",&n);

if(graph_type==1)
max_edges=n*(n-1)/2;
else
max_edges=n*(n-1);
for(i=1; i<=max_edges; i++)
{
printf("Enter edge[%d](-1 -1 to quit) :",i);
scanf("%d %d",&origin,&destin);
if((origin==-1)&&(destin==-1))
break;
if(origin>=n || destin>=n || origin<0 || origin<0)
{
printf("Invalid vertex!");
i--;
}
else
{
adj[origin][destin]=1;
if(graph_type==1)
adj[destin][origin]=1;
}
}
printf("The adjacency matrix is :\n");
for(i=0; i<n; i++)
{
for(j=0; j<n; j++)
printf("%4d",adj[i][j]);
printf("\n");
}
}
