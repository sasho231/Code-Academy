/* Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл). */

#include <stdio.h>
int main(void){
    FILE *fp = NULL;
    FILE *fpcopy = NULL;
    fp = fopen("test5.txt", "r");
    fpcopy = fopen("test5_copy.txt", "w");
    char c;
    int counter = 1;
    while((c = fgetc(fp)) != EOF){
        if(c == '\n')
            counter++;
        if(counter != 2) /* premahva vtori red */
            fputc(c, fpcopy);
    }
    fclose(fp);
    fclose(fpcopy);
    return 0;
}