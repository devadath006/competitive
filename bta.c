#include<stdio.h>
int main(){

int size,i;
//int arr[size];
printf("Enter the no of nodes");
scanf("%d",&size);
int arr[size];
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++){
printf("\n Node = %d\n",arr[i]);
if(2*i+1<size){
printf("left child=%d\n",arr[2*i+1]);
}
if(2*i+2<size){
printf("right child=%d\n",arr[2*i+2]);
}
}
return 0;
}
