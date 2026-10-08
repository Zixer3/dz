#include <stdio.h>

int main(){
    int desytich;
    int shestnat;
    int vosm;

    scanf("%d", &desytich);
    scanf("%x", &shestnat);
    scanf("%o", &vosm);

    printf("UNIT_ID: %d \nUNIT_VERSION: %d\nUNIT_STATUS:%d\nSUM:%d\n", desytich, shestnat, vosm, desytich+shestnat+vosm);

    return 0;
}