/* Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. */
#include <stdio.h>
struct tagmytime{
    int hours;
    int minutes;
    int seconds;
};
enum choice{
    hours,
    minutes,
    seconds
};
void printsec(struct tagmytime first);
int plus(struct tagmytime first){
    return first.hours + first.minutes;
}
int minus(struct tagmytime first){
    return first.minutes - first.seconds;
}
int main(void){
    struct tagmytime time;
    time.hours = 16;
    time.minutes = 45;
    time.seconds = 39;
    printsec(time);
    printf("hours + minutes = %d\n", plus(time));
    printf("minutes - seconds = %d\n", minus(time));
    return 0;
}
void printsec(struct tagmytime first){
    enum choice choice1;
    choice1 = minutes;
    if(hours == choice1){
        printf("Hours -> seconds %ds\n", first.hours * 3600);
    }
    else if(minutes == choice1){
        printf("Minutes -> seconds %ds\n", first.minutes * 60);
    }
    else if(seconds == choice1){
        printf("Seconds are %ds\n", first.seconds);
    }
}