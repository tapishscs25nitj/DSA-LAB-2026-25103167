#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
int checkmirror(struct node* left, struct node* right) {
    if (left == NULL && right == NULL) return 1;
    if (left == NULL || right == NULL) return 0;
    if (left->data != right->data) return 0;
    return checkmirror(left->left, right->right) && checkmirror(left->right, right->left);
}
int ismirror(struct node* root) {
    if (root == NULL) {
        return 1;
    }
    return checkmirror(root->left, root->right);
}

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main() {
    struct node* root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(2);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->left = createnode(5);
    root->right->right = createnode(3);
    if(ismirror(root))  printf("The tree is a mirror image of itself.\n");
    else  printf("The tree is not a mirror image of itself.\n");
    return 0;
}
