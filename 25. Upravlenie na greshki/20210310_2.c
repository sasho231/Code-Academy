/* Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са. */

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int opening_scope;
    int closing_scope;
} scope;
void checkmissing_A(scope *A, scope *B, scope *C, FILE *fp);

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("test2.txt", "rt");
    if (NULL == fp)
        printf("Erorr in openning the file.");
    scope *A = (scope *)malloc(sizeof(scope)); /* { } */
    scope *B = (scope *)malloc(sizeof(scope)); /* [ ] */
    scope *C = (scope *)malloc(sizeof(scope)); /* ( ) */
    checkmissing_A(A, B, C, fp);
    free(A);
    free(B);
    free(C);
    fclose(fp);
    return 0;
}
void checkmissing_A(scope *A, scope *B, scope *C, FILE *fp)
{
    char c;
    A->closing_scope = 0;
    A->opening_scope = 0;
    B->opening_scope = 0;
    B->closing_scope = 0;
    C->opening_scope = 0;
    C->closing_scope = 0;
    int row_counter = 0;
    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            row_counter++;
        }

        switch (c)
        {
        case '{':
            A->opening_scope = 1;
            break;
        case '}':
            A->closing_scope = 1;
            break;
        case '[':
            B->opening_scope = 1;
            break;
        case ']':
            B->closing_scope = 1;
            break;
        case '(':
            C->opening_scope = 1;
            break;
        case ')':
            C->closing_scope = 1;
            break;
        }
    }

    if (A->opening_scope && !A->closing_scope)
    {
        printf("Error: Closing } is missing\n");
    }
    if (!A->opening_scope && A->closing_scope)
    {
        printf("Error: Opening { is missing\n");
    }
    if (B->opening_scope && !B->closing_scope)
    {
        printf("Error: Closing ] is missing \n");
    }
    if (!B->opening_scope && B->closing_scope)
    {
        printf("Error: Closing ] is missing \n");
    }
    if (C->opening_scope && !C->closing_scope)
    {
        printf("Error: Closing ) is missing \n");
    }
    if (!C->opening_scope && C->closing_scope)
    {
        printf("Error: Opening ( is missing \n");
    }
}
