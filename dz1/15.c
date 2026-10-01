#include <stdio.h>

int main() {
    
    int reactor_core = 12;
    printf("[");
    printf("%d", reactor_core);
    printf(",");
    printf(" ");
    printf("%d", reactor_core*2);
    printf(",");
    printf(" ");
    printf("%d", reactor_core*reactor_core);
    printf("]");
    printf("\n");
    return 0;

}