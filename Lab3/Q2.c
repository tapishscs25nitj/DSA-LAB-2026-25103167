#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
       scanf("%d", &arr[i]);
    }
    int min_price = 1000000;
    int profit = 0;
    for(int i=0; i<n; i++){
        if(min_price > arr[i]) min_price = arr[i];
        if(arr[i] - min_price > profit) profit = arr[i] - min_price;               
    }
    printf("Maximum profit is: %d", profit);
}