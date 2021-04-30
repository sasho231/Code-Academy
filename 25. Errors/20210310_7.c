/* Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signal_handle(int signal){
    puts("Interactive attention signal caught.\n");
}

int main(void){
    while(1){
        signal(SIGINT, signal_handle);
        signal(EOF, signal_handle);
        signal(SIGFPE, signal_handle);
        sleep(1);
    }
    return 0;
}