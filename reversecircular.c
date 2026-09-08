#include <stdio.h>
#include <stdlib.h>

struct node {  
    int data;
    struct node *link;
};

struct node* reverse(struct node *start){
    struct node *curr = start;
    struct node *prev1 = NULL;
    struct node *next1 = NULL;
    while(curr->link != start){
        next1 = curr->link;
        curr->link = prev1;
        prev1 = curr;
        curr = next1;
    }
    curr->link = prev1;
    return curr;
}

int main(){
    struct node *start, *ptr, *temp;
    start = NULL;
    int n;
    printf("Number of nodes: ");  scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter data of node: ");  scanf("%d", &temp->data);
        temp->link = NULL;
        if(start == NULL) {start = temp;
            ptr = start;}
        else { ptr->link = temp;
            ptr = temp;}
    }
    ptr->link = start;

    start = reverse(start);
    ptr = start;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    } while(ptr != start);
}