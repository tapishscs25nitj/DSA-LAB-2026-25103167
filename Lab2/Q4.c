#include <stdio.h>
void reverse(int arr[], int start , int end) {
    while (start < end) {
        int temp = arr[start]; arr[start] = arr[end]; arr[end] = temp;
        start++;end--;
    }
}
int main(){
    int n ;
    printf("Enter size of array: ");  scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
    void reverse(int arr[], int start , int end);
    int k ;  printf("Enter k: ");  scanf("%d",&k);
    k %= n;
    reverse(arr , 0 , n);
    reverse(arr , 0 , k);
    reverse(arr , k , n);
    for(int i=0;i<n;i++) { printf("%d ",arr[i]); }
    return 0;
}
