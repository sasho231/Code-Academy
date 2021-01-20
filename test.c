#include <stdio.h>
#include <string.h>
int main(void){
    char room_type[] = " ";
    int luxury_price = 180;
    int standard_price = 120;
    float danak = 0.06;
    int broi_noshtuvki = 0;
    double total = 0;
    double otstupka = 0;
    printf("Kolko noshtuvki shte ostanete?\n");
    scanf("%d", &broi_noshtuvki);
    printf("Koq staq jelaete? Luksozna ili standartna?\n");
    scanf("%s", &room_type);
    
    if(strcmp(room_type, "luksozna") == 0){
        total = luxury_price * broi_noshtuvki;
        double m = total * danak;
        total = total + m;
        printf("Total: %f\n", total);

    }
    else if(strcmp(room_type, "standartna") == 0){
        total = standard_price * broi_noshtuvki + (standard_price * broi_noshtuvki * danak);
        printf("%.2f\n", total);
        
    }
    if(broi_noshtuvki > 5){
        otstupka = total * 0.15;
        total = total - otstupka;
        printf("Total sled otstupka = %f\n", total);
        
    }
    return 0;

}
