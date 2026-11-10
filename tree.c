#include<stdio.h>
// node structure
struct node{
    int data;
    struct node*left,*right;
};
// function to create a node
struct node*createnode(int value){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=newnode->right=NULL;
    return newnode;
}
void preorder (struct node* root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
}