/* Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете. */

#include <stdio.h>
int main(void){
    FILE *fptr = NULL;
    fptr = fopen("test1.txt", "rt");
    char c;
    int counter = 1;
    while((c = fgetc(fptr)) != EOF){
        if(c == '\n')
            counter++;
    }
    printf("Rows of the file are: %d\n", counter);
    fclose(fptr);
    return 0;

}