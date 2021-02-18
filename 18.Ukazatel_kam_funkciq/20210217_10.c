/* Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто */
#include <stdio.h>
#include <stdlib.h>
void findPrime(int x){  
    int i, Number, count;
    int array[700], j = 0;
    int flag = 0;
    for(Number = 1; Number <= 1000; Number++)
    {
        count = 0;
        for (i = 2; i <= Number/2; i++)
        {
  	    if(Number%i == 0)
  	    {
     	    count++;
  	        break;
	    }
        }
        if(count == 0 && Number != 1 )
        {   array[j] = Number;
            j++;
        }
    }
    for(i=0; i < j; i++){
        if(array[i] == x)
            flag = 1;
    }
    if(flag == 1)
        printf("Number is prime.\n");
    else
        printf("Number is not prime! \n");
}
int main(){
    int x = 0;
    printf("Enter a number to check if prime or not: ");
    scanf("%d", &x);
    findPrime(x);
    return 0;
}