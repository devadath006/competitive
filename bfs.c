#include<stdio.h>
#define MAX 10
int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int n){
if(rear==MAX-1){
return;
}
if(front==-1){
front=0;
}
queue[++rear]=n;
}
int dequeue(){
if(front==-1||front>rear){
return -1;
}
return queue[front++];
}
void bfs(int start,int n){
int i,current;
visited[start]=1;
enqueue(start);
while(front!=-1&&front<=rear){
current=dequeue();
printf("%d",current);
for(i=0;i<n;i++){
if(graph[current][i]==1&&visited[i]==0){
visited[i]=1;
enqueue(i);
}
}
}
printf("\n");
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
bfs(start,n);
return 0;
}

