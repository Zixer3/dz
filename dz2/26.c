#include <stdio.h>
#include <stdint.h>

int main(){

    uint8_t a;
    unsigned int aint;
    scanf("%u", &aint);
    a = (uint8_t)aint;
    uint8_t sum = (uint8_t)((unsigned int)a + 10u);
    uint8_t dva = a * 2; 
    uint8_t square = a * a;

    printf("ADD:%u\nMUL2:%u\nSQR:%u\n", sum, dva, square);
    return 0;
}

//потому что при переполнении счёт начинается заново с нуля(потому что unsigned int)