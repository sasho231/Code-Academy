/* Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap_str_ptrs(char const **arg1, char const **arg2)
{
    const char *tmp = *arg1;
    *arg1 = *arg2;
    *arg2 = tmp;
}
void quicksort_strs(char const *args[], unsigned int len)
{
    unsigned int i, pvt=0;

    if (len <= 1)
        return;

    // swap a randomly selected value to the last node
    swap_str_ptrs(args+((unsigned int)rand() % len), args+len-1);

    // reset the pivot index to zero, then scan
    for (i=0;i<len-1;++i)
    {
        if (strcmp(args[i], args[len-1]) < 0)
            swap_str_ptrs(args+i, args+pvt++);
    }

    // move the pivot value into its place
    swap_str_ptrs(args+pvt, args+len-1);

    // and invoke on the subsequences. does NOT include the pivot-slot
    quicksort_strs(args, pvt++);
    quicksort_strs(args+pvt, len - pvt);
}
int main(void){
    char s[] = "";
    printf("Enter text: ");
    scanf("%s", &s);
    int size = strlen(s);
    quicksort_strs(s, size);
    printf("%s\n", s);
    return 0;
}
