#include "func.h"

int main(void){

    init();
    for(int i = 0; i < 5;i++){
        add(i);
        
    }
    printList();
    printf("\n");
    addElementAfter(21, 3);
    printList();



    return 0;

}