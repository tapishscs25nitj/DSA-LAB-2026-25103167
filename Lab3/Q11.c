#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)     scanf("%d", &arr[i]);
    int temp[n + 2];
    for (int i = 0; i < n + 2; i++)     temp[i] = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n + 1)
            temp[arr[i]] = 1;}
    for (int i = 1; i <= n + 1; i++) {
        if (temp[i] == 0) {
            printf("Smallest missing positive integer: %d", i);
            break;   }
    }
}