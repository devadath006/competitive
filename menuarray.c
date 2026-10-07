#include<stdio.h>
#include<stdlib.h>
int main(){
int pos,value,i,choice,flag,size=0;
int *ptr=NULL;
while(1){
printf("1.create array\n2.insert\n3.display\n4.delete\n5.search\n6.exit\nEnter your choice");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter the size of the array\n");
scanf("%d",&size);
ptr=(int*)malloc(size*sizeof(int));
if(ptr==NULL){printf("Memory not allocated\n");}
else{printf("Memory successfully allocated\n");
printf("Enter %d elements",size);
for(i=0;i<size;i++){
scanf("%d",&ptr[i]);
}}
break;
case 2:
if(ptr==NULL){
printf("Create the array first");
break;
}
printf("Enter the position(0 to %d) in which element to be inserted,",size);
scanf("%d",&pos);
if(pos<0||pos>size){
printf("invalid position");
break;
}
ptr=(int*)realloc(ptr,(size+1)*sizeof(int));
if(ptr==NULL){
printf("Reallocation failed");
break;
}
printf("enter the value to be inserted");
scanf("%d",&value);
for(i=size;i>pos;i--){
ptr[i]=ptr[i-1];
}
ptr[pos]=value;
size++;
break;
case 3:
if(ptr==NULL||size==0){
printf("empty attay");
break;
}
for(i=0;i<size;i++){
printf("%d, ",ptr[i]);
}
break;
case 4:
if(ptr==NULL || size==0){
printf("array is empty");
break;
}
printf("Enter the position to be deleted");
scanf("%d",&pos);
if(pos<0||pos>=size){
printf("Invalid position");
break;
}
for(i=pos;i<size-1;i++){
ptr[i]=ptr[i+1];
}
size--;
break;
case 5:
flag=0;
if(ptr==NULL || size==0){
printf("array is empty");
break;
}
printf("Enter the element to be searched");
scanf("%d",&value);
for(i=0;i<size;i++){
if(ptr[i]==value){
printf("Element found at index %d",i);
flag=1;
break;
}

}
if(flag==0){
printf("Element not found");
}
break;
case 6:
free(ptr);
exit(0);
default:
printf("Invalid choice");
break;
}
}
}
