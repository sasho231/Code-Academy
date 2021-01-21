#include <stdio.h>
int main(){
    int luxury_price = 180;
    int standard_price = 120;
    double tourist_tax = 0.06;
    char choice = 0;
    double total_luxury = 0;
    double total_standard = 0;
    int luxury_rooms_counter = 0;
    int standard_rooms_counter = 0;
    int luxury_rooms_nights = 0;
    int standard_rooms_nights = 0;
    int standard_rooms_total = 0;
    int standard_nights_total = 0;
    int luxury_rooms_total = 0;
    int luxury_nights_total = 0;
    int totalnights = 0;
    double total_luxury_standard = 0;
    double discount = 0;
    double total_luxury_standard_after_tax = 0;
    while (choice != 3){
        printf("Welcome to Tishevi hotel.\n");
        printf("We have 2 type of rooms: standard and luxury.\n");
        printf("If you want standard room press 1.\nFor luxury room press 2.\nFor exit press 3.\n");
        scanf("%d", &choice);
        if(choice == 1){
            printf("You choose standard room.\n");
            printf("How many nights will you stay?\n");
            scanf("%d", &standard_rooms_nights);
            printf("How many rooms do you want?\n");
            scanf("%d", &standard_rooms_counter);
            total_standard = (total_standard + (standard_price * standard_rooms_nights * standard_rooms_counter));
            printf("Your bill is: %.2f\n", total_standard);
            standard_rooms_total = standard_rooms_total + standard_rooms_counter;
            standard_nights_total = standard_nights_total + standard_rooms_nights;
            

        }
        else if (choice == 2){
            printf("You choose luxury room.\n");
            printf("How many nights will you stay?\n");
            scanf("%d", &luxury_rooms_nights);
            printf("How many rooms do you want?\n");
            scanf("%d", &luxury_rooms_counter);
            total_luxury = total_luxury + (luxury_rooms_nights * luxury_rooms_counter * luxury_price);
            printf("Your bill is: %.2f\n", total_luxury);
            luxury_nights_total = luxury_nights_total + luxury_rooms_nights;
            luxury_rooms_total = luxury_rooms_total + luxury_rooms_counter;
        }
        else if (choice == 3) {
            break;}
        else{
            printf("Invalid choice.\n");
        }
    }
    totalnights = standard_nights_total * standard_rooms_total + luxury_nights_total * luxury_rooms_total;
    total_luxury_standard = total_luxury + total_standard;
    if (totalnights < 5 && total_luxury_standard < 700){
        discount = 0.15;
        total_luxury_standard_after_tax = total_luxury_standard - (total_luxury_standard * discount);
        printf("You have 15 percent discount.\n");
        total_luxury_standard_after_tax = total_luxury_standard_after_tax + (total_luxury_standard_after_tax * tourist_tax);
        printf("Your offer is: \n");
        printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
        printf("Total nights: %d\n", totalnights);
        printf("You owe: %.2f\n", total_luxury_standard_after_tax);
        printf("Offer is valid for 14days.\n");
        }
    
    if (total_luxury_standard > 700 && total_luxury_standard < 1000){
        printf("Congatulations you are a loyal customer and can choose between 15 percent discount or coupon of 100leva for spa procedures.\n");
        printf("For discount press 1.\nFor spa coupon press 2.\n");
        int choice1 = 0;
        scanf("%d", &choice1);
        switch(choice1){
            case 1:
            printf("You choose 15 percent discount.\n");
            discount = 0.15;
            total_luxury_standard_after_tax = total_luxury_standard - (total_luxury_standard * discount);
            total_luxury_standard_after_tax = total_luxury_standard_after_tax + (total_luxury_standard_after_tax * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");
            break;
            
            case 2:
            printf("You choose spa coupon.\n");
            total_luxury_standard_after_tax = total_luxury_standard + (total_luxury_standard * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");
            break;
            default:
            printf("You didnt choose any of the rewards.\n");
            total_luxury_standard_after_tax = total_luxury_standard + (total_luxury_standard * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");

            break;
            }
    }    

    if (total_luxury_standard > 1000){
        printf("Congatulations you are a loyal customer and can choose between: \n1.20 percen discount.\n2.Coupon of 200leva for spa procedures.\n3.Two free dinners for the whole family.\n");
        printf("Please make your choise 1, 2 or 3\n");
        int choice3 = 0;
        scanf("%d", &choice3);
        switch(choice3){
            case 1:
            printf("You choose 20 percent discount.\n");
            double discount2 = 0.2;
            total_luxury_standard_after_tax = total_luxury_standard - (total_luxury_standard * discount2);
            total_luxury_standard_after_tax = total_luxury_standard_after_tax + (total_luxury_standard_after_tax * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");
            break;
            
            case 2:
            printf("You choose coupon for spa procedures.\n");
            total_luxury_standard_after_tax = total_luxury_standard + (total_luxury_standard * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");
            break;

            case 3:
            printf("You choose two free dinners for your family.\n");
            total_luxury_standard_after_tax = total_luxury_standard + (total_luxury_standard * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");
            break;

            default:
            printf("You didnt choose any of the rewards.\n");
            total_luxury_standard_after_tax = total_luxury_standard + (total_luxury_standard * tourist_tax);
            printf("Your offer is: \n");
            printf("Total standard rooms: %d, total luxury rooms: %d.\n", standard_rooms_total, luxury_rooms_total);
            printf("Total nights: %d\n", totalnights);
            printf("You owe: %.2f\n", total_luxury_standard_after_tax);
            printf("Offer is valid for 14days.\n");
            break;         

            }
    }       
    return 0;
} 
 
