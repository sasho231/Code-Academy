#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void){
    FILE *fp = NULL;
    fp = fopen("asdas.txt", "r");
    if(NULL == fp){
        perror("ERR: ");
        printf("\nErrNo: %d %s\n", errno, strerror(errno));
    }
    else{
        fclose(fp);
    }
    return 0;
}