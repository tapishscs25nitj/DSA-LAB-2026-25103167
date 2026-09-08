#include <stdio.h>
#include <stdlib.h>

struct node {  
    int data;
    struct node *prev;
    struct node *next;
};

struct node* reverse(struct node *start){
    struct node *curr = start;
    struct node *prev1 = NULL;
    while(curr != NULL){
        struct node *next1 = curr->next;
        curr->next = prev1;
        curr->prev = next1;
        prev1 = curr;
        curr = next1;
    }
    return prev1;
}

int main(){
    struct node *start , *ptr , *temp;
    start = NULL;
    int n;
    printf("Enter no. of nodes: "); scanf("%d" , &n);
    for(int i = 0; i < n; i++){
        temp = (struct node*)malloc(sizeof(struct node));
        printf("enter data of node"); scanf("%d" , &temp->data);
        temp->next = NULL;
        temp->prev = NULL;

        if(start == NULL) {
            start = temp;
        }
        else {
            ptr = start;
            while(ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
            temp->prev = ptr;
        }
    }

    start = reverse(start);
    ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}