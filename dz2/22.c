#include <stdio.h>
#include <stdbool.h>

int main(){

    int a,b;
    bool logica;
    bool logicb;

    scanf("%d", &a);
    scanf("%d", &b);

    logica = a;
    logicb = b;
    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %lu\nFLAGS_SUM: %d\n", logica, logicb, sizeof(bool), logica+logicb);

    return 0;
}