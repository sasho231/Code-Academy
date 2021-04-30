#include <stdio.h>
/* Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.
 */
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    int j = 0;
    for(j = low; j <=high - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi+1, high);
    }
}
int main(void){
    int arr[] = {12, 20, 5, 7, 9,};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    int i = 0;
    for(i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
