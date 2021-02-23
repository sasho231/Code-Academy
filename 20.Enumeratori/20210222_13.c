/* Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
 */
#include <stdio.h>
union test{
    unsigned short number : 6;
    char character : 7; /* s 6 ne mi raboti */
};
int main(void){
    union test val;
    val.number = 33;
    printf("%d, %c\n", val.number, val.character);
    val.character = 'b';
    printf("%d, %c\n", val.number, val.character);
    return 0;

}