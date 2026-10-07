#include<stdio.h>
#define MAX 10
int graph[MAX][MAX];
int visited[MAX];
void dfs(int start,int n){
printf("%d",start);
visited[start]=1;
for(int i=0;i<n;i++){
if(graph[start][i]==1&&visited[i]==0){
dfs(i,n);
}
}
}
int main(){
int n,start;
printf("enter the no of vertices");
scanf("%d",&n);
printf("enter the values");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&graph[i][j]);
}
}
printf("enter the starting vertices");
scanf("%d",&start);
dfs(start,n);
return 0;
}
