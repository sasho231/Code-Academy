#include <stdio.h>
/* Напишете програма, която трябва да отпечата таблица за преобразуване от Целзий във Фаренхайт, 
от -50 до +150 градуса по Целзий, на стъпки от 5 градуса. Температурата по целзий се изчислява  
по формулата 5 * (фаренхаит – 32)/9.*/
void menu();
void convertFromCelsiustoFahrenheit(float celsius,float fahrenheit);
void convertFromFahrenheittoCelsius(float celsius,float fahrenheit);

int main(void) {
    
    menu();
   
    return 0;
}
void menu() {    
    int choice;    
    float celsius;    
    float fahrenheit = 0;
   
    do {	
         printf("\n---------------Menu----------------\n");
         printf("1. Convert from Celsius to Fahrenheit\n");        
         printf("2. Convert from Fahrenheit to Celsius\n");        
         printf("3. Exit\n");        
         scanf("%d", &choice);
       
        switch(choice)        {            
        case 1:				
                convertFromCelsiustoFahrenheit(celsius,fahrenheit);				
                break;            
        case 2:				
                convertFromFahrenheittoCelsius(celsius,fahrenheit);				
                break;            
        case 3:				
                printf("Goodbye!\n");				
                break;            
        default:				
                printf("Enter a valid choice!");				
                break;        
         }
    } while (choice != 3);    

}
void convertFromCelsiustoFahrenheit(float celsius,float fahrenheit){    
    printf("-----------------------------------");    
    printf("\n   Celsius            Fahrenheit\n");
   
    for (celsius = -50; celsius <= 150; celsius += 5) {        
        printf("-----------------------------------");        
        fahrenheit = (celsius * 9 / 5) + 32;        
        printf("\n | %6.2f °C\t |\t%6.2f °F |\n", celsius, fahrenheit);   
    }
   
    printf("-----------------------------------");
}
void convertFromFahrenheittoCelsius(float celsius,float fahrenheit) {   
    printf("-----------------------------------");    
    printf("\n   Fahrenheit            Celsius\n");
    
    for (fahrenheit = -58; fahrenheit <= 302; fahrenheit += 9) {        
        printf("-----------------------------------");       
        celsius = (fahrenheit - 32) * 5/9;        
        printf("\n | %6.2f °F\t |\t%6.2f °C |\n", fahrenheit, celsius);    
    }
    printf("-----------------------------------");
    
}