Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
  
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n], temp[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
   
    k = k % n;
   
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
  
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
   
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
