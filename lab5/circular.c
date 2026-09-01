#include <stdio.h>
#include <stdlib.h>

struct node {  
    int data;
    struct node *link;
};

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

    //insertion at first
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 60;
    temp->link = start;
    start = temp;
    ptr->link = start;
    
    //insertion at last
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 40;
    ptr->link = temp;
    temp->link = start;

    //insertion at specific position
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 50;
    ptr = start;
    int pos = 2;
    for(int i = 1; i < pos-1; i++) {
        ptr = ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;
    
    //print
    ptr = start;
    while(ptr->link != start) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("%d ", ptr->data);
    return 0;
}