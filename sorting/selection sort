#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main()
{
    int n = 8;
    int arr[] = {5,3,6,2,7,1,7,4};
    selectionSort(arr, n);
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++)  {
        printf(" %d ", arr[i]);
    }
    return 0;
}
