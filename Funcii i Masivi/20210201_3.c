/* Упражнение 3.* Добавете проверка във функцията float atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */
#include <stdio.h>
float atof(char *s){
    float rez = 0;
    float fact = 1;
    int point_seen = 0;
    if(*s == '-'){
        s++;
        fact = -1;
    }
    for (;*s; s++){
    if (*s == '.'){
      point_seen = 1; 
      continue;
    }
    int d = *s - '0';
    if (d >= 0 && d <= 9){
      if (point_seen) fact /= 10.0;
      rez = rez * 10.0 + (float)d;
    }
  }
  return rez * fact;
}
    


int main(void){
    char s[]  = "-125.25";
    printf("%f\n",atof(s));
    return 0;

}