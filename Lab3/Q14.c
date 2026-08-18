#include <stdio.h>

int main(){
    int n ;
    printf("Enter the size of n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int maximum = 0;
    for(int i = 0 ; i < n ;i++){
        for(int j = i+1; j < n ; j++){
            if( (arr[i]^arr[j]) > maximum) maximum = arr[i]^arr[j];
        }
    }
    printf("Maximum xor pair value is: %d" , maximum);
    return 0;
}