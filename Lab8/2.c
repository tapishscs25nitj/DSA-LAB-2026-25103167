#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int minimum_depth(struct node* root){
    if(root == NULL) return 0;
    if(!root->left && !root->right) return 1;
    int mindepth = 0;
    if(!root->left)  return 1 + minimum_depth(root->right);
    else if(!root->right) return 1 + minimum_depth(root->left);
    int leftd = minimum_depth(root->left);
    int rightd = minimum_depth(root->right);
    mindepth = (leftd < rightd) ? leftd : rightd;
    return 1 + mindepth;
}

int main(){
    struct node* root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(2);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->left = createnode(5);
    root->right->right = createnode(4);
    root->left->left->left = createnode(6);
    int mindepth = minimum_depth(root);
    printf("Minimum depth of the binary tree: %d\n", mindepth);
    return 0;
}