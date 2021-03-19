#include <stdio.h>

void print_bytes(const char* pcVal, unsigned uSize){
    unsigned i;
    for(i = 0; i < uSize; i++){
        printf("%#02x ", (int)(pcVal[i] & 0xFF));
    }
    printf("\n");
}

int main(void){
    short sval = 0xAABB;
    int nVal = 0xAABBCCDD;
    long long llval = 0x1122334455667788;

    print_bytes((const char*) &sval, sizeof(sval));
    print_bytes((const char*) &nVal, sizeof(nVal));
    print_bytes((const char*) &llval, sizeof(llval));
    return 0;
}