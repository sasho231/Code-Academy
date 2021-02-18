/* Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. 
Може ли да оптимизирате тази задача и да не се налага да въртим два
цикъла?
Как бихте направили същото, използвайки case? */
#include <stdio.h>
#include <string.h>
void find_frequency(char [], int []);
 
int main()
{
   char string[100];
   int c, count[26] = {0};
 
   printf("Input a string\n");
   gets(string);
 
   find_frequency(string, count);
   
   printf("Character Count\n");
   
   for (c = 0 ; c < 26 ; c++)
      printf("%c \t  %d\n", c + 'a', count[c]);
 
   return 0;
}

void find_frequency(char s[], int count[]) {
   int c = 0;
   
   while (s[c] != '\0') {
        if (s[c] >= 'a' && s[c] <= 'z' )
            count[s[c]-'a']++; /* returns index 'a' = 97 , 'c' = 99 > index 2*/
            c++;
   }
}