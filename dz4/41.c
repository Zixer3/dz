//26 Время дни нед дни 7

#include <stdio.h>
#define K 7 

int main(void){
    int stat;
    double days;
    double weeks;

    stat = 1;

    printf("Введите количество дней: \n");
    stat = scanf("%lf", &days);
    weeks = days / K;
    
    while (stat != 0)
    {
        printf("Количество недель: %lf, или в целых числах %d недель и %d дней\n", weeks, (int)weeks, (int)days % K);
        printf("Введите количество дней: \n");
        stat = scanf("%lf", &days);
        weeks = days / K;
    }
    
    return 0;
}