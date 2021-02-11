/* Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи. */
#include <stdio.h>
void sort(int *a, int n){
    int i = 0,j = 0,temp = 0;
    for(i=0; i < n-1; i++){
        for(j=0; j < n - i; j++){
            if(*(a + j) == *(a + j +1)){
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a+j+1) = temp;
            }
        }
    }
}
int main(void){
    int n = 0, i = 0;
    printf("How many numbers do you want? ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i < n; i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &a[i]);
    }
    sort(a, n);
    for(i=0; i < n; i++){
        printf("%d", a[i]);
    }
    return 0;
}