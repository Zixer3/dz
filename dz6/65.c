#include <stdio.h>

int main(void){
    int choice;
    double value, result;

    printf("\nПункты: \n");
    printf("1. C -> F\n");
    printf("2. F -> C\n");
    printf("3. C -> K\n");
    printf("4. K -> C\n");
    printf("5. Выход\n");

    while ((choice = getchar()) != EOF && choice != '5') {
        if (choice == '\n') {
            continue;
        }

        printf("Введите температуру: ");
        scanf("%lf", &value);
        getchar(); // пустое, нужно для того чтобы отбросить перенос строки

        switch (choice) {
            case '1':
                result = value * 9.0 / 5.0 + 32.0;
                printf("%.2f C = %.2f F\n", value, result);
                break;
            case '2':
                result = (value - 32.0) * 5.0 / 9.0;
                printf("%.2f F = %.2f C\n", value, result);
                break;
            case '3':
                result = value + 273.15;
                printf("%.2f C = %.2f K\n", value, result);
                break;
            case '4':
                result = value - 273.15;
                printf("%.2f K = %.2f C\n", value, result);
                break;
        }

        printf("\nПункты: \n");
        printf("1. C -> F\n");
        printf("2. F -> C\n");
        printf("3. C -> K\n");
        printf("4. K -> C\n");
        printf("5. Выход\n");
    }

    printf("\nПрограмма завершена\n");
    return 0;
}