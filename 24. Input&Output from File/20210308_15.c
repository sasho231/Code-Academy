/* Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред. */

#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    int i = 0;
    long position;
    char str[64];

    fp=fopen("test4.txt","r");
    fgets(str, 64, fp);
    fseek(fp, 0, SEEK_END);
    position = ftell(fp);
    for(i=position; i >= 0; i--){
        printf("%c",str[i]);
    }
    fclose(fp);

    return(0);
}