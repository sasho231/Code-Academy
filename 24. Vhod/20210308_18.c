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
int main(void){
    FILE *fp = NULL;
    fp = fopen("person.dat", "w+");
    if(NULL == fp) perror("Cant open!");
    t_person Pesho = {"Pesho", 23, 'M'};
    t_person copy;
    fprintf(fp, "%s, %d, %c", Pesho.name, Pesho.age, Pesho.gender);
    fseek(fp, 0 , SEEK_SET);
    fscanf(fp, "%[^,], %d, %c", copy.name, &copy.age, &copy.gender);
    printf("(%s %d %c)\n", copy.name, copy.age, copy.gender);
    fclose(fp);
    return 0;

}