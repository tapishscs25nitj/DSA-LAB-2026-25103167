#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) printf("Overflow");
    newnode->data = x;
    newnode->next = NULL;
    if(front == NULL){
        front = newnode;
        rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue(){
    if(front == NULL)  printf("Queue is empty. ");
    else{
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Front element: %d\n", front->data);
    dequeue(); 
    printf("Front element after dequeue: %d", front->data);
    return 0;
}