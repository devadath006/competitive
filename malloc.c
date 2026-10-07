#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,j,i,size;
printf("Enter the size of elements : ");
scanf("%d",&size);
ptr=(int*)malloc(size * sizeof(int));
if(ptr==NULL){
printf("Memory not allocated");
}else{
printf("Enter %d elements\n",size);
for(j=0;j<size;j++){
scanf("%d",&ptr[j]);
}
printf("elements are : ");
for(i=0;i<size;i++){
printf("%d\t",ptr[i]);
}
free(ptr);
}
return 0;
}
