#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *left;
struct Node *right;
};
struct Node *createNode(){
int value;
printf("Enterv the value(-1 for no value");
scanf("%d",&value);
if(value==-1){
return NULL;
}
struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
printf("Enterv the left child(-1 for no value");
newNode->left=createNode();
printf("Enterv the right child(-1 for no value");
newNode->right=createNode();
return newNode;
}
void preorder(struct Node *root){
if(root==NULL)
return;
printf("%d, ",root->data);
preorder(root->left);
preorder(root->right);
}
int main(){
struct Node *root;
root=createNode();
preorder(root);
return 0;
}
