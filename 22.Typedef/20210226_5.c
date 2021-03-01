/* Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата. */
#include <stdio.h>
#define MAX 3
int main(void){
    typedef int t_int_array[MAX];
    t_int_array arr;
    for(int i=0; i < MAX; i++){
        printf("Enter Value for array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Values are: \n");
    for(int i=0; i < MAX; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
