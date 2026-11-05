#include <stdio.h>

int summ(int x);

int formnumber(int massive[999], int lastdigit);

int main(void){
    int chara;
    int stopper = '0';
    int counter = 0;
    int fornumbermassive[999] = {};
    int lastdigit = 0;
    int number = 0;

    printf("Вводите числа через пробел или через Enter: \n");
    while((chara = getchar()) != EOF ){
        if(chara == stopper) break;
        else{
            if(chara != ' ' && chara != 10){
                fornumbermassive[lastdigit] = chara;
                lastdigit++;
            }
            else{
                number = formnumber(fornumbermassive, lastdigit);
                if(summ(number) < number)counter++;
                for(int i = 0; i <= lastdigit; i++) fornumbermassive[i] = 0;
                lastdigit=0;
            }
        }
    }

    printf("\nКол-во недостаточных чисел: %d\n", counter);
    return 0;
}
int summ(int x){ //сумма делителей 
    int sum = 0;

    for(int i = 2; i <= ((x/2) + 1); i++){
        if((x%i) == 0)sum += i;
    }

    return sum;
}

int formnumber(int massive[999], int lastdigit){ //уж извините, дальше числа буду брать через scanf()
    int number = 0;

    for(int i = 0; i < lastdigit; i++){
        number = number * 10 + (massive[i] - '0');
    }
    return number;
}