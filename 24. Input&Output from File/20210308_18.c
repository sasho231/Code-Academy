/* Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин. */
typedef struct{
    char name[20];
    int age;
    char gender;
}t_person;
#include <stdio.h>
#include <stdlib.h>
static const char *FORMAT_PERSON_IN = "<person>\n<name>%[^<]</name>\n<age>%d</age>\n<gender>%c</gender>\n</person>\n";
static const char *FORMAT_PERSON_OUT = "<person>\n<name>%s</name>\n<age>%d</age>\n<gender>%c</gender>\n</person>\n";

int main(void){
    FILE *fp = NULL;
    fp = fopen("person.xml", "w+");
    if(NULL == fp) perror("Cant open!");
    t_person Pesho = {"Pesho", 23, 'M'};
    t_person copy;
    fprintf(fp, FORMAT_PERSON_OUT, Pesho.name, Pesho.age, Pesho.gender);
    fseek(fp, 0 , SEEK_SET);
    fscanf(fp, FORMAT_PERSON_IN, copy.name, &copy.age, &copy.gender);
    printf("%s %d %c\n", copy.name, copy.age, copy.gender);
    fclose(fp);
    return 0;

}