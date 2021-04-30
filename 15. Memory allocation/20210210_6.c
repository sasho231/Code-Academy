/* Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи. */
#include <stdio.h>
int linear_search(int a[], int n, int key){
    int *p = &a[0];
    int position = -1;
    int counter = 0;
    int i =0;
    for(i = 0; i < n; i++){
        if(*(p+i) == key)
            position = i;
    }
    return position;

}
int main(void){
    int n = 5;
    int a[5] = {1, 23, 5, 2, 7};
    int key = 5;
    printf("%d\n", linear_search(a, n, key));
    return 0;
}