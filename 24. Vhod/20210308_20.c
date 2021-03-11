#include <stdio.h>

void printFile(FILE *stream, const char *prompt);
void fillOutputFile(FILE *from, FILE *to);

int main()
{
    FILE *fpIN = NULL;
    FILE *fpOUT = NULL;

    fpOUT = fopen("OUTPUT3.TXT", "w+");
    fpIN = fopen("INPUT3.TXT", "r");

    if (fpIN == NULL || fpOUT == NULL)
    {
        perror("Failed to open the file");
    }
    else
    {
        printFile(fpIN, "INPUT3.TXT");
    }

    fillOutputFile(fpIN, fpOUT);

    printFile(fpOUT, "OUTPUT3.TXT");

    fclose(fpIN);
    fpIN = NULL;
    fclose(fpOUT);
    fpOUT = NULL;

    return 0;
}

void printFile(FILE *stream, const char *prompt)
{
    printf("%s\n", prompt);

    fseek(stream, 0, SEEK_SET);

    int c;
    while (1)
    {
        c = fgetc(stream);

        if (feof(stream))
            break;

        printf("%c", c);
    }
}

void fillOutputFile(FILE *from, FILE *to)
{
    int trip, price;

    printf("\n");
    scanf("%d", &trip);

    fseek(from, 0, SEEK_END);
    int sizeofOneNum = ftell(from) / 10;

    int stops[10];
    int i = 0;
    int totalPrice = 0;

    while (trip > 0)
    {
        if (trip >= 6)
        {
            stops[i] = 6;
            trip -= 6;
        }
        else
        {
            stops[i] = trip;
            trip -= trip;
        }

        fseek(from, sizeofOneNum * stops[i] - 3, SEEK_SET);

        fscanf(from, "%d", &price);

        fprintf(to, "%d %d\n", stops[i], price);
        totalPrice += price;

        i++;
    }
    fprintf(to, "%d", totalPrice);
}