/* Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред */
#include <stdio.h>
#define ARRAYSIZE 1000
int main(void){
    char c;
    char array[ARRAYSIZE];
    char *cptr = NULL;
    int counter = 0;
    int i = 0;
    while((c=getchar()) != '\n' && (counter < ARRAYSIZE)){
        array[counter] = c;
        counter++;
    }
    cptr = &array[counter]; /* vzema posledniq element ot array i go reversva */
    for (i = counter; i > 0 ; i--){
        cptr--;
        printf("%c", *cptr);
    }    
    return 0;
}