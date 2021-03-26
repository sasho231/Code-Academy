#include <stdio.h>
#include <stdint.h>

extern void printHelloFromBazinga();
extern void printHelloFromSomeOtherFile();
extern void printHelloFromYetOtherFile();


int32_t main() {
    printHelloFromBazinga();
    printHelloFromSomeOtherFile();
    printHelloFromYetOtherFile();

    return 0;
}


