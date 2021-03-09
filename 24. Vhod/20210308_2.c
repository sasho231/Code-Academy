/* Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){

    FILE *pfile = NULL;
    char *filename = "test.txt";
    /* FILE *fopen(const char *restrict name, const char *restrict mode); */
    pfile = fopen (filename, "wt");
    if(pfile==NULL)
        printf("Failed to open %s. \n", filename);
    fclose (pfile);
    pfile = NULL;
    /* int rename (const char *oldname, const char *newname)”; */
    if(rename("C:\\Users\\pc\\codeAcademy\\24. Vhod\\test.txt", "C:\\Users\\pc\\codeAcademy\\24. Vhod\\copy_test.txt"))
        printf("Failed to rename file.\n");
    else
        printf("File renamed successfully.\n");
    remove(filename);

}