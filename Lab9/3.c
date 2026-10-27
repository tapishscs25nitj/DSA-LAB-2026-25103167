#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* insert(struct Node *root, int x) {
    if (root == NULL) {
        root = malloc(sizeof(struct Node));
        root->data = x;
        root->left = root->right = NULL;
    }
    else if (x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}
void inorder(struct Node *root, int a[], int *n) {
    if (root == NULL) return;
    inorder(root->left, a, n);
    a[(*n)++] = root->data;
    inorder(root->right, a, n);
}
int main() {
    struct Node *root = NULL;
    int values[] = {10, 5, 15, 2, 7, 12, 20, 6, 8};
    int a[100], used[100] = {0};
    int n = 0, x = 9, k = 4;
    for (int i = 0; i < 9; i++)
        root = insert(root, values[i]);
    inorder(root, a, &n);
    printf("Closest values: ");
    while (k--) {
        int best = -1;
        for (int i = 0; i < n; i++) {
            if (!used[i] && (best == -1 || abs(a[i] - x) < abs(a[best] - x) || (abs(a[i] - x) == abs(a[best] - x) && a[i] < a[best])))
                best = i;
        }
        if (best != -1) {
            printf("%d ", a[best]);
            used[best] = 1;
        }
    }
    return 0;
}