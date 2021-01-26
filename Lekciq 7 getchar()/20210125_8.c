#include <stdio.h>

int main() {
    char c;;
    while ((c = getchar()) != EOF) {
        if (c != '\t' && c != ' ')
            putchar(c);
        
    }
    return 0;
}