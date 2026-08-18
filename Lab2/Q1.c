#include <stdio.h>
//insertion
int main(){
    int n ;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
    arr[n] = 0;
    
    int position , element ;
    printf("Enter the position where you want to insert an element: ");
    scanf("%d",&position);
    printf("Enter the element you want to insert: ");
    scanf("%d",&element);
    for(int i = n ; i >= position-1 ; i-- ){
        arr[i] = arr[i-1];
    }
    arr[position-1] = element;
    for(int i = 0 ; i < n+1 ; i++ ){
        printf("%d " , arr[i]);
    }
}

// #include <stdio.h>
// //deletion
// int main(){
//     int n ;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements of array: ");
//     for(int i=0;i<n;i++) { 
//         scanf("%d",&arr[i]); 
//     }
//     int element;
//     printf("Enter the element you want to delete: ");
//     scanf("%d" , &element);
//     int position = 0;
//     for(int i = 0; i < n ; i++){
//         if (arr[i] == element)
//         {position = i; 
//             break;
//         }
//     }
//     for(int i = position ; i < n-1 ; i++){
//         arr[i] = arr[i+1];
//     }
//     for(int i = 0 ; i < n-1 ; i++ ){
//         printf("%d" , arr[i]);
//     }
//     return 0;
// }