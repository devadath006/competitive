#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,j,i,k,size;
printf("Enter the size of elements : ");
scanf("%d",&size);
ptr=(int*)calloc(size,sizeof(int));
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
}
int new_size;
printf("Enter the  number of elements to be added : ");
scanf("%d",&new_size);
int *temp = ptr;
ptr=(int*)realloc(ptr,(size + new_size)*sizeof(int));
if(ptr==NULL){
printf("Memory not allocated");
free(temp);
exit(0);
}
else{
printf("Memory allocated successfully");
printf("Enter the elements to be added");
for(k=size;k<new_size+size;k++){
scanf("%d",&ptr[k]);
}
printf("elements are : ");
for(i=0;i<size+new_size;i++){
printf("%d\t",ptr[i]);
}
free(ptr);
//free(temp);
}
return 0;
}
