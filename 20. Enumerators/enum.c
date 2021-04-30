#include <stdio.h>
enum bool{
    false,
    true
};
int main(void){
    enum bool val;
    val = true;
    switch(val){
        case true:
        printf("true");
        break;
        case false:
        printf("false");
        break;
    }
    return 0;
}