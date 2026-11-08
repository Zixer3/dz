#include <stdio.h>
//нечётный ASCII-код
int main(void){
    int a;
    while((a=getchar()) != EOF){
        if((a%2) != 0){putchar(a); putchar(10);}
    }

    return 0;
}