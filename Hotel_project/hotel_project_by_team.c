#include <stdio.h>

int main()
{
    double luxRoomPrice = 180;
    double standartRoomPrice = 120;

    printf("Welcome to hotel Sunrise!\n");
    printf("In our hotel we have luxury and standard rooms\n");
    printf("Please make your choice!\n");

    char choice = 0;
    unsigned short int roomsLuxury = 0;
    unsigned short int roomsLuxuryTottal = 0;
    unsigned short int nightsLuxury = 0;
    unsigned short int nightsLuxuryTottal = 0;
    unsigned short int roomStandart = 0;
    unsigned short int roomStandartTottal = 0;
    unsigned short int nightsStandart = 0;
    unsigned short int nightsSttandartTotattl = 0;
    double subTotal = 0;
    float toristTax = 0;
    double total = 0;

    while (choice != '3')
    {
        printf("For luxury room type 1.\n");
        printf("For standart room type 2.\n");
        printf("For exit type 3.\n");
        scanf("%s", &choice);
        if (choice == '1')
        {
            printf("Your choice is Luxury room.\n");
            printf("How many nights you are going to stay?\n");
            scanf("%d", &nightsLuxury);
            printf("How many luxury rooms would you like?\n");
            scanf("%d", &roomsLuxury);
            subTotal = (subTotal + (nightsLuxury * luxRoomPrice * roomsLuxury));
            roomsLuxuryTottal = roomsLuxury + roomsLuxuryTottal;
            nightsLuxuryTottal = nightsLuxury + nightsLuxuryTottal;
            printf("Your bill is  %.2f.\n", subTotal);
        }
        else if (choice == '2')
        {
            printf("Your choice is Standart room.\n");
            printf("How many nights you are going to stay?\n");
            scanf("%d", &nightsStandart);
            printf("How many standart rooms would you like?\n");
            scanf("%d", &roomStandart);
            subTotal = (subTotal + (nightsStandart * standartRoomPrice * roomStandart));
            roomStandartTottal = roomStandart + roomStandartTottal;
            nightsSttandartTotattl = nightsStandart + nightsSttandartTotattl;
            printf("Your bill is  %.2f.\n", subTotal);
        }
        else if (choice == '3')
        {
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }
    unsigned short int totalNights = 0;
    totalNights = nightsSttandartTotattl * roomStandartTottal + nightsLuxuryTottal * roomsLuxuryTottal;

    if (totalNights > 5 && subTotal < 700)
    {
        printf("You have 15 percent discount.\n");
        double discount1 = subTotal * 0.15;
        printf("Your discount is %.2f.\n", discount1);
        subTotal = subTotal - discount1;
        printf("Your bill with discount is: %.2f.\n", subTotal);
        toristTax = subTotal * 0.06;
        printf("You owe tourist tax: %.2f.\n", toristTax);
        total = subTotal + toristTax;
        printf("Your final offer is:\n");
        printf("Standart rooms: %d\n", roomStandartTottal);
        printf("Luxury rooms: %d\n", roomsLuxuryTottal);
        printf("Total nights: %d\n", totalNights);
        printf("Final bill: %.2f\n", total);
    }

    if (subTotal > 700 && subTotal < 1000)
    {
        printf("You can choose between 15 percent discount and free spa procedure for 100 leva.\n");
        printf("For 15 percent discount type 1.\n");
        printf("For free spa procedure for 100 leva type 2.\n");
        char ch2 = 0;
        scanf("%s", &ch2);

        if (ch2 == '1')
        {
            double discount2 = 0;
            printf("You have 15 percent discount.\n");
            discount2 = subTotal * 0.15;
            printf("Your discount is %.2f.\n", discount2);
            subTotal = subTotal - discount2;
            printf("Your bill with discount is: %.2f.\n", subTotal);
            toristTax = subTotal * 0.06;
            printf("You owe tourist tax: %.2f.\n", toristTax);
            total = subTotal + toristTax;
            printf("Your final offer is:\n");
            printf("Standart rooms: %d\n", roomStandartTottal);
            printf("Luxury rooms: %d\n", roomsLuxuryTottal);
            printf("Total nights: %d\n", totalNights);
            printf("Final bill: %.2f\n", total);
        }

        else if (ch2 == '2')
        {
            printf("You have chosen a spa procedure for 100 leva.\n");
            toristTax = subTotal * 0.06;
            printf("You owe tourist tax: %.2f.\n", toristTax);
            total = subTotal + toristTax;
            printf("Your final offer is:\n");
            printf("Standart rooms: %d\n", roomStandartTottal);
            printf("Luxury rooms: %d\n", roomsLuxuryTottal);
            printf("Total nights: %d\n", totalNights);
            printf("1 free spa procedure for 100 leva.\n");
            printf("Final bill: %.2f\n", total);
        }
    }

    if (subTotal > 1000)
    {
        printf("You can choose between 20 percent discount, free spa procedure for 100 leva and 2 free dinners for your family.\n");
        printf("For 20 percent discount type 1.\n");
        printf("For free spa procedure for 100 leva type 2.\n");
        printf("For 2 free dinners for your family type 3.\n");
        char ch3 = 0;
        scanf("%s", &ch3);

        if (ch3 == '1')
        {
            double discount3 = 0;
            printf("You have 20 percent discount.\n");
            discount3 = subTotal * 0.20;
            printf("Your discount is %.2f.\n", discount3);
            subTotal = subTotal - discount3;
            printf("Your bill with discount is: %.2f.\n", subTotal);
            toristTax = subTotal * 0.06;
            printf("You owe tourist tax: %.2f.\n", toristTax);
            total = subTotal + toristTax;
            printf("Your final offer is:\n");
            printf("Standart rooms: %d\n", roomStandartTottal);
            printf("Luxury rooms: %d\n", roomsLuxuryTottal);
            printf("Total nights: %d\n", totalNights);
            printf("Final bill: %.2f\n", total);
        }

        else if (ch3 == '2')
        {
            printf("You have chosen a spa procedure for 100 leva.\n");
            toristTax = subTotal * 0.06;
            printf("You owe tourist tax: %.2f.\n", toristTax);
            total = subTotal + toristTax;
            printf("Your final offer is:\n");
            printf("Standart rooms: %d\n", roomStandartTottal);
            printf("Luxury rooms: %d\n", roomsLuxuryTottal);
            printf("Total nights: %d\n", totalNights);
            printf("1 free spa procedure for 100 leva.\n");
            printf("Final bill: %.2f\n", total);
        }
        else if (ch3 == '3')
        {
            printf("You have chosen 2 free dinners for your family.\n");
            toristTax = subTotal * 0.06;
            printf("You owe tourist tax: %.2f.\n", toristTax);
            total = subTotal + toristTax;
            printf("Your final offer is:\n");
            printf("Standart rooms: %d\n", roomStandartTottal);
            printf("Luxury rooms: %d\n", roomsLuxuryTottal);
            printf("Total nights: %d\n", totalNights);
            printf("2 free dinners for your family.\n");
            printf("Final bill: %.2f\n", total);
        }

        else
        {
            toristTax = subTotal * 0.06;
            printf("You owe tourist tax: %.2f.\n", toristTax);
            total = subTotal + toristTax;
            printf("Your final offer is:\n");
            printf("Standart rooms: %d\n", roomStandartTottal);
            printf("Luxury rooms: %d\n", roomsLuxuryTottal);
            printf("Total nights: %d\n", totalNights);
            printf("Final bill: %.2f\n", total);
        }
    }  

    return 0;
}