#include <stdio.h>
#include <string.h>
int stack[100];
int top = -1;
int checkvalid(char s[]){
    int max = 0;
    int count = 0;
    int stacksize = 0;
    for(int i = 0; i < strlen(s) ; i++){
        if(s[i] == '(') {
            stack[++top] = i;
            if(top+1 > stacksize) stacksize = top + 1;
        }
        else if(s[i] == ')'){
            if(top == -1) {
                printf("invalid char '%c' \n" , s[i]);
            }
            else{
                top--;
                count+=2;
                if(count > max) max = count;
            }
        }
    }
    while(top != -1){
        printf("invalid char '%c' \n" , s[stack[top]]);
        top--;
    }
    return max;
}
int main(){
    char s[100];
    printf("enter a string ");
    scanf("%s", s);
    int result = checkvalid(s);
    printf("length of the longest valid parentheses substring is: %d\n", result);
}