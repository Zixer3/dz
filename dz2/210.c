#include <stdio.h>
#include <stdint.h>

int main(){

    int ident;
    uint8_t kodst;
    float napr;
    uint16_t checksum;
    int kodstint;
    scanf("%x %o %f", &ident, &kodstint, &napr);
    kodst = (uint8_t)kodstint;
    checksum = ident + kodst;

    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %d\n", ident, kodst, kodst, napr, checksum);
    return 0;
}


//PACKET_ID: 7
//STATUS_CODE: 65
//STATUS_CHAR: A
//VOLTAGE: 3.30
//CHECKSUM: 72