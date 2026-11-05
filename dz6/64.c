#include <stdio.h>

int main(void){
    double income;
    double ttier1 = 0.0, ttier2 = 0.0, ttier3 = 0.0;
    double tax1 = 0, tax2 = 0, tax3 = 0, total =0;
    
    printf("Введите доход: ");
    if (scanf("%lf", &income) != 1 || income < 0.0) {
        printf("нет\n");
        return 0;
    }

    if (income <= 500.0) {
        ttier1 = income;
    } else if (income <= 1000.0) {
        ttier1 = 500.0;
        ttier2 = income - 500.0;
    } else {
        ttier1 = 500.0;
        ttier2 = 500.0;
        ttier3 = income - 1000.0;
    }

    tax1 = ttier1 * 0.10;
    tax2 = ttier2 * 0.15;
    tax3 = ttier3 * 0.20;
    total = tax1 + tax2 + tax3;

    printf("\nДоход: %.2f\n", income);
    printf("Ступень 1 (до 500, 10%%):\tденег %8.2f, налог %8.2f\n", ttier1, tax1);
    printf("Ступень 2 (500-1000, 15%%):\tденег %8.2f, налог %8.2f\n", ttier2, tax2);
    printf("Ступень 3 (свыше 1000, 20%%):\tденег %8.2f, налог %8.2f\n", ttier3, tax3);
    printf("Итоговый налог: %.2f\n", total);

    return 0;
}