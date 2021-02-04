#include <stdio.h>
int main(void){
    char arr1[] = {'a', 'b', 'c'};
    int arr2[] = {1, 123, 342};
    double arr3[] = {1.12, 23.54, 199.99};
    printf("The last element of array 1 is %c\n", arr1[2]);
    printf("The last element of array 2 is %d\n", arr2[2]);
    printf("The last element of array 3 is %f\n", arr3[2]);
    return 0;


}