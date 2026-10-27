#include <stdio.h>
void merge(int arr1[] , int arr2[], int n1 , int n2, int arr[]){
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) 
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
    while (i < n1) {
        arr[k++] = arr1[i++];
    }
    while (j < n2) {
        arr[k++] = arr2[j++];
    }
}
void mergesort(int arr[] , int n){
    if (n <= 1)  return;
    int mid = n / 2;
    int arr1[mid];
    int arr2[n - mid];
    for (int i = 0; i < mid; i++) {
        arr1[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
        arr2[i - mid] = arr[i];
    }
    mergesort(arr1, mid);
    mergesort(arr2, n - mid);
    merge(arr1, arr2, mid, n - mid, arr);
}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, n);
    printf("Sorted array: ");
    for(int i = 0; i<n ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}