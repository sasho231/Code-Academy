/* sum numbers while both are bigger than 1 */
#include <stdio.h>
int recursive(int a, int b){
    int value = 1;
    if(a>1&&b>1){
        value += recursive(a-1, b-1);
    }
    return (value + a + b);
}
int main(void){
    printf("Sum is : %d\n", recursive(5, 7));
    return 0;
}