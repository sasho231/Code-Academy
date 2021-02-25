#include <stdio.h>

void debugMsg(const char *pszMsg){
    #ifdef BUG
        printf("Debug: %s\n", pszMsg);
    #endif
}
int main(void){
    debugMsg("asdadsa");
    return 0;
}