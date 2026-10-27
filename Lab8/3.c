#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
int top = -1;
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
void inorder(struct node* node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    arr[++top] = node->data;
    inorder(node->right);
}
int main(){
    struct node* root = createnode(5);
    root->left = createnode(3);
    root->right = createnode(7);
    root->left->left = createnode(2);
    root->left->right = createnode(4);
    root->right->left = createnode(6);
    root->right->right = createnode(8);
    root->left->left->left = createnode(1);
    inorder(root);
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    printf("The %dth smallest element in the binary tree is: %d\n", k, arr[k-1]);
    printf("The %dth largest element in the binary tree is: %d\n", k, arr[top-k+1]);
    return 0;
}