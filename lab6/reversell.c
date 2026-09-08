#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node* function(struct node *start){
    struct node* temp = start;
    struct node* prev = NULL;
    struct node* next = NULL;
    while(temp!= NULL){
        next = temp->link;
        temp->link = prev;
        prev = temp;
        temp = next;
    }
    return prev;
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
    start = function(start);
    ptr = start;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("%d ", ptr->data);
    return 0;
}