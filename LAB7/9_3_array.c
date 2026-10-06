#include<stdio.h>
#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int x){
    if(rear == MAX - 1){
        printf("Queue is full\n");
        return;
    }
    if(front == -1) front++;
    queue[++rear] = x;
}
void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is empty. ");
        return;
    }
    front++;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Front element: %d\n", queue[front]);
    dequeue();
    printf("Front element after dequeue: %d\n", queue[front]);
    return 0;
}