/* Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат */
#include <stdio.h>
#define MAX 2
enum isblackhair{
    false,
    true
};
struct test{
    int age;
    char name[25];
    float height;
    enum isblackhair hair;
};
void fillarray(struct test *wtf){
    int i =0;
    for(i=0; i < MAX; i++){
        printf("Enter age for person[%d]", i + 1);
        scanf("%d", &wtf->age);
        printf("Enter heigh in format 1.72 for person[%d]", i + 1);
        scanf("%lf", &wtf->height);
        printf("Enter name for person[%d]", i + 1);
        scanf("%s", &wtf->name);
        printf("Does it have black hair for true press 1 for false press 0: ");
        scanf("%d", &wtf->hair);
    }

}
void printarray(struct test *wtf){
    int i =0;
    char string[25];
    for(i=0; i < MAX; i++){
        printf("Person[%d] age: %d, height: %.2lf, name: %s. \n", i+1, wtf[i].age, wtf[i].height, wtf[i].name);

    }
}
int main(void){
    struct test array[MAX];
    fillarray(array);
    printarray(array);
    return 0;

}