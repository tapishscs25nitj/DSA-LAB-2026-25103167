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
    int left = 0 , right = n-1;
    int left_max = arr[left] , right_max = arr[right];
    int total_water = 0;
    while(left < right){
        if(left_max < right_max){
            left++;
            if(arr[left] > left_max) left_max = arr[left];
            total_water += left_max - arr[left];
        }
        else{
            right--;
            if(arr[right] > right_max) right_max = arr[right];
            total_water += right_max - arr[right];
        }
    }
    printf("Total rainwater trapped: %d", total_water);
}