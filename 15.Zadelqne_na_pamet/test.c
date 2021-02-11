#include <stdio.h>
/* int main(void){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *p = &arr[1];
    int sum = 0;
    for(; *p; p+=2){
        sum+= *p;
    }
    printf("%d\n", sum);
    return 0;
} */

int main(void){
    char s[20];
    char *p = NULL;
    char c;
    int i = 0;
    printf("Enter a text: ");
    while((c = getchar()) != '\n'){
        s[i] = c;
        i++;
    }
    p = &s[i];
    int j =0;
    for(j = i; j > 0; j--){
        p--;
        printf("%c", *p);
    }
    return 0;
}