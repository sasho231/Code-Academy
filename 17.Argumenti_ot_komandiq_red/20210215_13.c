/* Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length()); */
#include <stdio.h>
int main(void){
    char *s = "Hello world!";
    int counter = 0;
    for(;*s;s++){
        counter++;
    }
    printf("Lenght is: %d\n", counter);
    return 0;
}