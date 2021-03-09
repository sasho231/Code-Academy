/* Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви. */

#include <stdio.h>
#include <ctype.h>
int main(void){
    FILE *fptr = fopen("test3.txt", "r");
    FILE *fcopy = fopen("copy_test3.txt", "r");
    int c;
    while((c = fgetc(fptr)) != EOF){
        c = toupper(c);
        fputc(c, fcopy);

    }
    if(!rename("C:\\Users\\pc\\codeAcademy\\24. Vhod\\copy_test3.txt", "C:\\Users\\pc\\codeAcademy\\24. Vhod\\testt3.txt"))
        printf("Failed to rename file.\n");
    else
        printf("File renamed succssfully.\n");
    remove("copy_test3.txt");
    char str[64];
    fgets(str, 64, fcopy);
    printf("%s", str);
    fclose(fptr);
    fclose(fcopy);
    return 0;
}