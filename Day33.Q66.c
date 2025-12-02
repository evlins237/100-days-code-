Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1]; 
    printf("Enter elements of sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    int i;
    for (i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    
    arr[i + 1] = key;
    n++; 

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
