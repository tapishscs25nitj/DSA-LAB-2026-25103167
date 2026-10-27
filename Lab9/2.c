#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* createnode(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
}
struct Node *first = NULL, *middle = NULL;
struct Node *last = NULL, *prev = NULL;
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    if (prev != NULL && prev->data > root->data) {
        if (first == NULL) {
            first = prev;
            middle = root;
        } 
        else {
            last = root;
        }
    }
    prev = root;
    inorder(root->right);
}
void recoverBST(struct Node* root) {
    inorder(root);
    if (first && last) {
        int temp = first->data;
        first->data = last->data;
        last->data = temp;
    } 
    else if (first && middle) {
        int temp = first->data;
        first->data = middle->data;
        middle->data = temp;
    }
}
void printInorder(struct Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    printf("%d ", root->data);
    printInorder(root->right);
}

int main() {
    struct Node* root = createnode(6);
    root->left = createnode(3);
    root->right = createnode(8);
    root->left->left = createnode(1);
    root->left->left->left = createnode(0);
    root->left->left->right = createnode(2);
    root->left->right = createnode(7);
    root->left->right->left = createnode(5);
    root->left->right->right = createnode(3.5);
    root->right->left = createnode(4);
    root->right->right = createnode(9);
    printf("Original BST (Inorder): ");
    printInorder(root);
    recoverBST(root);
    printf("Corrected BST (Inorder): ");
    printInorder(root);
    return 0;
}
