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
    temp->link = temp1;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 30;
    temp->link = NULL;
    temp1->link = temp;
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = 70;
    temp1->link = NULL;
    temp->link = temp1;

    //insertion at first
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 60;
    temp->link = start;
    start = temp;

    //insertion at last
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 40;
    ptr = start;
    while(ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
    temp->link = NULL;                                  //because added in last


    int count = 0 ;
    ptr = start;
    while(ptr->link !=NULL){
        count++;
        ptr = ptr->link;
    }
    int mid = count/2;


    //insertion at specific position
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 50;
    ptr = start;
    int pos = 4;                                                    //put pos = mid for inserting at mid position
    for(int i  =1 ; i < pos-1 ; i++){
        ptr = ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;

    //insert before a particular value
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 80;
    int value = 30;
    if(ptr->data == value){
        temp->link = start;
        start = temp;
    }
    else{
        ptr = start;
        while(ptr->link->data != value && ptr->link != NULL){
            ptr = ptr->link;
        }
        temp->link = ptr->link;
        ptr->link = temp;
    }

    //printing linked list
    ptr = start;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }


    return 0;
}