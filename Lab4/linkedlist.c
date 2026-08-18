#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *start , *ptr , *temp;
    temp =  (struct node*)malloc(sizeof(struct node));
    temp->data = 10;
    temp->link = NULL;
    start = temp;
    temp =  (struct node*)malloc(sizeof(struct node));
    temp->data = 20;
    temp->link = NULL;
    start->link = temp;
    temp =  (struct node*)malloc(sizeof(struct node));
    temp->data = 30;
    temp->link = NULL;
    start->link->link = temp;

    //insertion
    int pos = 3;
    ptr = start;
    for(int i = 1 ; i < pos-1; i++){
        ptr = ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;
    return 0;
}