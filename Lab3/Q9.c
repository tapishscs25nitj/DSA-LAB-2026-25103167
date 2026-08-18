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
    int prefix[n];
    prefix[0] = 1;
    for(int i = 1 ; i < n ; i++){
        prefix[i] = prefix[i-1]*arr[i-1];
    }
    int suffix[n];
    suffix[n-1] = 1;
    for(int i = n-2 ; i >= 0 ; i--){
        suffix[i] = suffix[i+1]*arr[i+1];
    }
    for(int i = 0 ; i < n ; i++){
        arr[i] = prefix[i]*suffix[i];
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}