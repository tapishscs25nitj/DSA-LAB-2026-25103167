#include <stdio.h>
#include <stdlib.h>

struct node {  
    int data;
    struct node *link;
};

int main(){
    struct node *start, *ptr, *temp, *temp1;
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
    
    //deletion at first
    temp1 = start;
    start = start->link;
    ptr->link = start;
    free(temp1);

    //deletion at last
    ptr = start;
    while(ptr->link->link != start) {
        ptr = ptr->link;
    }
    temp1 = ptr->link;
    ptr->link = start;
    free(temp1);
    
    // deletion at specific position
    int pos = 3;
    ptr = start;    
    for(int i = 1; i < pos-1; i++) {
        ptr = ptr->link;
    }
    temp1 = ptr->link;
    ptr->link = ptr->link->link;
    free(temp1);

    //print
    ptr = start;
    while(ptr->link != start) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("%d ", ptr->data);
    
    return 0;
}