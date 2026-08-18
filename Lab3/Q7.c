#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of n: ");    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)    scanf("%d", &arr[i]);
    int i = 0 ; int j = n-1;
    while(i <= j){
        while(i<=j && arr[i] < 0) i++;
        while(i<=j && arr[j] > 0) j--;
        if(i < j){
            int temp = arr[i];    arr[i] = arr[j];    arr[j] = temp;
            i++; j--;
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}