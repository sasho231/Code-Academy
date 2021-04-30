/* Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла; */

#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fpt = NULL;
    fpt = fopen("test1.txt", "rt");
    if(fpt == NULL)
        perror("Cant open.");
    char *p = (char*)malloc(64);

    if(fgets(p, 25, fpt)!= NULL)
        printf("%s", p);
    /* printira sledvasthiq red ot .txt faila */
    fgets(p, 25, fpt);
    printf("%s", p);
    fgets(p, 25, fpt);
    printf("%s", p);
    fgets(p, 25, fpt);
    printf("%s", p);
    fclose(fpt);
    free(p);
    return 0;

}