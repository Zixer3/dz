#include <stdio.h>

int main(void){
    int mass[999] = {0};
    int lastdigit = 0;
    int chara;
    int stopper = '0';
    
    while((chara = getchar()) != EOF ){
        if(chara == stopper) break;
        else{
            if(chara != ' ' && chara != 10){
                mass[lastdigit] = chara;
                lastdigit++;
            }
            else{
                //func(massive, lastdigit)
                printf("\n");
                for(int j = 0; j <= lastdigit; j++) printf("%c", (char)mass[j]);
                printf("\n %d \n", lastdigit);
                for(int i = 0; i <= lastdigit; i++) mass[i] = 0;
                lastdigit=0;
            }
        }
    }
    return 0;
}