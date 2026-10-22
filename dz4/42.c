#include <stdio.h>
#include <stdint.h>

int main(void){
    uint16_t w,h;

    printf("Введите значения переменных w и h:\n");
    scanf("%hu %hu", &w, &h);
    printf("Результат: %f", ((float)(w * h) / 10000)); //нужно явное преобразование, потому что в ином случае число поделится нацело(цифры после запятой просто отбросятся)
    printf(" все sizeof: %llu %llu %llu \n", (unsigned long long)sizeof(uint16_t), (unsigned long long)sizeof(float), (unsigned long long)sizeof(unsigned long long));
    
    return 0;
}