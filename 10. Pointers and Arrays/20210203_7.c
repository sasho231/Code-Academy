#include <stdio.h>
int main(void){
    int arr[10] = {0};
    int *arrPtr = arr; /* points to the 0th element of array */
    arrPtr = arr; /* points to 0th element */
    int (*ptr)[10] = &arr; /* points to the whole array */
    printf("%p\n", arrPtr);
    return 0;
}