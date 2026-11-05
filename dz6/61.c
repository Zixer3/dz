#include <stdio.h>

int main(void){
    int chara;
    int stopper = '#';
    int counter = 0;
    int prev = 0;

    printf("Вводите для подсчёта экранированных символов: ");
    while((chara = getchar()) != EOF ){
        if(chara == stopper) break;
        else{
        if (prev == '\\'){
            counter++; prev=0;
            }
        else{prev = chara;}
        }
    }

    printf("\nКол-во экранированных символов: %d\n", counter);

    return 0;
}