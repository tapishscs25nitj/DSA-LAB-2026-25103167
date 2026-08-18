// #include <stdio.h>
// int main(){
//     int n ;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements of array: ");
//     for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
//     int c1 =0 ;int c2 =0;
//     int temp[n];
//     for(int i=0;i<n;i++) {
//         temp[i] = arr[i];
//     }
//     // bubble sort
//     for(int i = 0 ; i < n-1 ; i++){
//         for(int j = 0 ; j < n-i-1 ; j++){
//         if(arr[j] > arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//             c1++;
//         }
//       }
//     }
//     // insertion sort
//     for(int i = 1; i < n; ++i) {
//         int key = temp[i];
//         int j = i - 1;
//         while (j >= 0 && temp[j] > key) {
//             temp[j + 1] = temp[j];
//             j = j - 1;
//             c2++;
//         }
//         temp[j + 1] = key;
//     }
//     printf("Time count for bubble : %d and for insertion %d " , c1 , c2 );
//     return 0;
// }



// #include <stdio.h>
// #include <time.h>
// clock_t start, end;
// double time_taken;
// int main(){
//     int n ;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements of array: ");
//     for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
//     int c1 =0 ;int c2 =0;
//     int temp[n];
//     for(int i=0;i<n;i++) {
//         temp[i] = arr[i];
//     }
//     // bubble sort
//     start = clock();
//     for(int i = 0 ; i < n-1 ; i++){
//         for(int j = 0 ; j < n-i-1 ; j++){
//         if(arr[j] > arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//             c1++;
//         }
//       }
//     }
//     end = clock();

//     time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

//     printf("Bubble Sort time = %f seconds\n", time_taken);

//     start = clock();
//     // insertion sort
//     for(int i = 1; i < n; ++i) {
//         int key = temp[i];
//         int j = i - 1;
//         while (j >= 0 && temp[j] > key) {
//             temp[j + 1] = temp[j];
//             j = j - 1;
//             c2++;
//         }
//         temp[j + 1] = key;
//     }
//     end = clock();
//     time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
//     printf("Insertion Sort time = %f seconds\n", time_taken);
//     printf("Time count for bubble : %d and for insertion %d " , c1 , c2 );
//     return 0;
// }



#include <stdio.h>
int main(){
    int n ;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
    int temp[n];
    for(int i=0;i<n;i++) {
        temp[i] = arr[i];
    }
    // bubble sort
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];    arr[j] = arr[j+1];     arr[j+1] = temp;    }  }}
    // insertion sort
    for(int i = 1; i < n; ++i) {
        int key = temp[i];
        int j = i - 1;
        while (j >= 0 && temp[j] > key) {      temp[j + 1] = temp[j];      j = j - 1;        }
        temp[j + 1] = key;
    }
    for(int i=0;i<n;i++) { printf("%d ",arr[i]); }
    printf("\n");
    for(int i=0;i<n;i++) { printf("%d ",temp[i]); }
    return 0;
}
