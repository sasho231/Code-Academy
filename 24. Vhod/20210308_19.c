/* Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход. */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    FILE *fp = NULL;
    fp = fopen(argv[1], "rt");
    char *str = NULL;
    if(argc<3)
        printf("a.exe\n");
    if(NULL == argv[1]) printf("Cant open the file.");
    else{
        
        while(1){
            str = (char*)malloc(100);
            fscanf(fp, "%s", str);
            printf("%s ", str);
            if(feof(fp)){
                break;
            }    
        }
    }
    fclose(fp);
    free(str);
    return 0;
}