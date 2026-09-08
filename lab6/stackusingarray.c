#include<stdio.h>
#include<stdlib.h>
int isfull(int top, int n){
    if(top == n-1)  return 1;
    else  return 0;
}
int isempty(int top){
    if(top == -1)  return 1;
    else  return 0;
}
void push(int s[], int value, int *top, int n){
    if( isfull(*top, n) )  printf("overflow");
    else{
        (*top)++;
        s[*top] = value;
    }
}
void pop(int s[], int *top){
    if( isempty(*top) )  printf("underflow");
    else{
        int x = s[*top];
        printf("%d pop\n", s[*top]);
        (*top)--;
    }
}
int main(){
    int n;
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    int s[n];
    int top = -1;
    for(int i = 0; i < n; i++)  push(s ,(i+1)*10 , &top, n);
    for(int i = 0; i < n; i++) printf("%d ", s[i]);
    printf("\n");
    pop(s, &top);
}