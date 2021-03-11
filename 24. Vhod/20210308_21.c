/* Напишете стандартната програма за Linux wc, която приема име на
файл като аргумент от командния ред и изкарва на стандартния изход
стринга "Брой думи: ", последван от броя думи във файла. Програмата да
приема три вида аргументи:
 -c - който да изкарва "Брой символи: "
 -l - който да изкарва "Брой редове: "
 -w - който е за брой думи(тоест стандартното поведение на
програмата)
Ако един два или три от тези аргументи са подадени да не се взема
предвид стандартното поведение.
 Примери:
 > wc f1 // изкарва броя думи
 > wc -с f1 // изкарва броя символи
 > wc -l f1 // изкарва само броя редове
 > wc -c -w f1 // изкарва броя символи и броя думи във f1 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE *fp = NULL;
    char c;
    int words_counter = 1;
    int symbol_counter = 0;
    int rows_counter = 0;
    if(argc == 2){
        fp = fopen(*(argv + 1), "rt");
        if(NULL == fp){
            printf("Cant open the file.\n");
        }
        while((c = fgetc(fp)) != EOF){
            if(c == ' ')
                words_counter++;
        }
        printf("Number of words = %d\n", words_counter);
    }
    else if(argc == 3){
        fp = fopen(*(argv + 2), "rt");
        if( *(argv + 1) == "-c"){
            while((c = fgetc(fp)) != EOF){
                symbol_counter++;
            }
            printf("Symbols = %d\n", symbol_counter);

        }
    }
    fclose(fp);
    return 0;

}