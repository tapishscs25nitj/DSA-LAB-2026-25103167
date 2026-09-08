#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int isempty(struct node *top){
    if(top == NULL)  return 1;
    else  return 0;
}

struct node* push(struct node *start, int value){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
    printf("Stack Overflow: Out of memory\n");
    return start;
    }
    temp->data = value;
    temp->link = start;
    start = temp;
    return start;
}

struct node* pop(struct node *start){
    struct node *temp;
    if(isempty(start))  printf("underflow");
    else{
        temp = start;
        start = start->link;
        printf("%d pop\n", temp->data);
        free(temp);
    }
    return start;
}

int main(){
    struct node *start, *ptr, *temp , *top;
    top = NULL;
    int n;
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        top = push(top, i * 10);
    }
    top = pop(top);
    top = pop(top);
    ptr = top;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}