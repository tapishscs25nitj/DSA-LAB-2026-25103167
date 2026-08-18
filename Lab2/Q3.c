#include <stdio.h>
int main(){
    int n  , m ;
    printf("Enter m and n for array: ");
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements of array: ");
    for(int i=0;i<m;i++){
        for(int j =0 ;  j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Row  Column  Value\n");
    for(int i=0;i<m;i++){
        for(int j =0 ;  j < n ; j++){
            if(arr[i][j] != 0) {
                printf("%d  %d  %d\n" , i+1 , j+1 , arr[i][j]);
            }
        }
    }
    return 0;
}