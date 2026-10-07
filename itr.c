#include<stdio.h>
#include<stdlib.h>
int main(){
int size;
printf("Enter the size of array");
scanf("%d",&size);
int *arr=(int*)malloc(size*sizeof(int));
if(arr==NULL){
printf("array is nULL");
exit(0);
}
printf("Enter the elements of array");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
int *ptr=arr;

printf("The RRay elements are");
while(ptr<arr+size){
printf("%d",*ptr);
ptr++;
}

free(arr);
return 0;
}
