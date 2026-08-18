//create a linked list 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *start, *ptr, *temp , *temp1;
    start = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 10;
    temp->link = NULL;
    start = temp;
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = 20;
    temp1->link = NULL;
    start->link = temp1;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 30;
    temp->link = NULL;
    temp1->link = temp;
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = 40;
    temp1->link = NULL;
    temp->link = temp1;

    ptr = start;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    //deketion of first
    // start = start->link;

    //deletion at a postion
    // int pos = 3;
    // ptr = start;
    // for(int i = 1; i < pos-1; i++) {
    //     ptr = ptr->link;
    // }
    // ptr->link = ptr->link->link;

    //deletion at last
    // ptr = start;
    // while(ptr->link->link != NULL) {
    //     ptr = ptr->link;
    // }
    // ptr->link = NULL;



    int value = 20;
    ptr = start;
    while(ptr->link != NULL) {
        if(ptr->link->data == value) {
            ptr->link = ptr->link->link;
            break;
        }
        ptr = ptr->link;
    }


    ptr = start;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}
