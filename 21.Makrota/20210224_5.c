/* Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо. */
#include <stdio.h>

#ifdef DEBUG
#define DEBUGMSG(msg)                 \
    {                                 \
        printf("Debug: %s\n", (msg)); \
    }
#else
#define DEBUGMSG(msg)
#endif
int main(void)
{
    DEBUGMSG("COding master");
    return 0;
}