#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* create(int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
}
void topView(struct Node *root) {
    if (!root) return;
    int a[100] = {0}, offset = 50;
    struct Node *q[100];
    int hd[100], f = 0, r = 0;
    q[r] = root;
    hd[r++] = 0;
    while (f < r) {
        struct Node *t = q[f];
        int h = hd[f++] + offset;   
        if (!a[h]) a[h] = t->data ? t->data : -1;
        if (t->left) {
            q[r] = t->left;
            hd[r++] = h - offset - 1;
        }
        if (t->right) {
            q[r] = t->right;
            hd[r++] = h - offset + 1;
        }
    }
printf("%d ", root->data);
for (int i = 0; i < 100; i++) {
    if (a[i] && a[i] != root->data)
        printf("%d ", a[i]);
}
}

int main() {
    struct Node *root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->right = create(4);
    root->right->right = create(5);
    topView(root);
    return 0;
}