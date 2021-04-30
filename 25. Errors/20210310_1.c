/* Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла */
#include <stdio.h>

int main(void){
    FILE *f1 = NULL;
    FILE *f2 = NULL;
    f1 = fopen("test.txt", "r");
    f2 = fopen("test1.txt", "r");
    int counter = 1;
    if(NULL == f1 || NULL == f2)
        printf("Cant open the files.\n");
    char c, s;
    printf("Difference is: ");
    while(((c = fgetc(f1)) != EOF) && ((s = fgetc(f2)) != EOF)){
        
        if(c != s){
            putchar(c);
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}