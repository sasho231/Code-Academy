#include <stdio.h>
/* Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i: */
int sum_array(int a[], int n){
    int sum = 0;
    int *p = &a[0];
    for(; *p; p++){
        sum += *p;
    }
    return sum;

}
int main(void){
    int n;
    printf("How many values would you want? ");
    scanf("%d", &n);
    int a[n];
    int i =0;
    for(i=0; i < n; i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Sum of elements of array is: %d\n", sum_array(a, n));
    return 0;
    
}
