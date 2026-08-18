// //second largest 
// #include <stdio.h>
// int main(){
//     int n ;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements of array: ");
//     int l1 = 0 , l2 = 0;
//     for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
//     if(arr[0] > arr[1]) {
//         l1 = arr[0];
//         l2 = arr[1];
//     }
//     else { l1 = arr[1] ; l2 = arr[0]; }
//     for(int i = 2 ; i < n ; i++){
//         if(arr[i] > l1) { l2 = l1; l1 = arr[i]; }
//         else if( arr[i] > l2 && arr[i] != l1) l2 = arr[i];
//     }
//     printf("Second largest element is %d" , l2);
// }


// second smallest
#include <stdio.h>
int main(){
    int n ;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    int s1 = 0 , s2 = 0;
    for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
    if(arr[0] < arr[1]) {
        s1 = arr[0];
        s2 = arr[1];
    }
    else { s1 = arr[1] ; s2 = arr[0]; }
    for(int i = 2 ; i < n ; i++){
        if(arr[i] < s1) { s1 = arr[i] ; s2 = s1; }
        else if( arr[i] < s2 && arr[i] != s1) s2 = arr[i];
    }
    printf("Second smallest element is %d" , s2);
}