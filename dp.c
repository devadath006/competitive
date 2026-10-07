#include<stdio.h>
int main(){
int n;
int fib[100];
printf("enter anumber of elements");
scanf("%d",&n);
if(n<1){
printf("enter a positive integer");
return 0;
}
fib[0]=0;
fib[1]=1;
if(n>2){
for(int i=2;i<n;i++){
fib[i]=fib[i-1]+fib[i-2];
}
}
for(int i=0;i<n;i++){
printf("%d, ",fib[i]);
}
return 0;
}
