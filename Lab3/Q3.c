//circular subarray sum
#include <stdio.h>
int main(){
    int n ;
    printf("Enter the size of n: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    arr[n] = arr[0];
    printf("Maximum circular subarray sum is: ");
}
