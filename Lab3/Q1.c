//nth largest distinct number in an array
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
}