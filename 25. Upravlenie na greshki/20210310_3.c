/* Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл. */

#include <stdio.h>
#define LINES 42
int line = 1, page_number = 1;
void printfile(FILE* fpin, FILE* fpout, char *string);

int main(int argc, char* argv[]){
    FILE *fpIn = NULL;
    FILE *fpOut = NULL;
    fpIn = fopen("test6.txt", "w");
    if(NULL == fpIn) printf("Cant open the file \n");
    else{
        if(argc == 1){
            printf("Wrong usage. Enter more information.\n");
        }
        while(argc > 1){
            fpOut = fopen(*++argv, "r");
            if(NULL == fpOut) 
                printf("Cant open the file.\n");
            else{
                printfile(fpIn, fpOut, *argv);
                fclose(fpOut);
            }
            argc--;
        }


    }
    return 0;
}
void printfile(FILE* fpin, FILE* fpout, char *filename){
    char c;
    fprintf(fpin, "Title: Filename %s\n", filename);
    line++;

    while((c = fgetc(fpout)) != EOF){
        if(c == '\n'){
            line++;
            if(line % LINES == 0){
                fprintf(fpin, "\n\n Page: %d\n\n", page_number);
                page_number++;
            }
        }
        fprintf(fpin, "%c", c);
    }
    while(line % LINES != 0){
        fprintf(fpin, "\n");
        line++;
    }
    fprintf(fpin, "\n \n Page: %d \n", page_number);
}