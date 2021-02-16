/* Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.
 */
#include <stdio.h>
#include <string.h>
int main(void){
    char string[] = "I am poor  programmer.";
    char *sptr = NULL;
    sptr = string;
    for(;*sptr;sptr++){
        if(*sptr == 'p'){
            *sptr = 'g';
            *(sptr + 1) = 'r';
            *(sptr + 2) = 'e';
            *(sptr + 3) = 'a';
            *(sptr + 4) = 't';
            break;
            }
        
    }
    printf("%s\n", string);
    return 0;
}