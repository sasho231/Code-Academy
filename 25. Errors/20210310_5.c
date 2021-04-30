/* Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс) */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handlesignal(int iSignal){
    printf("Handle signal %d\n", iSignal);
}
int main(){
    /* signal(SIGQUIT, handlesignal); */
    signal(SIGINT, handlesignal);
    signal(SIGABRT, handlesignal);
    for(;;){
        sleep(1);
    }
    return 0;
}