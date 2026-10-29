//15

#include <stdio.h>
#define HEIGHT 5

int main(void){
    for(int i = 1; i <= HEIGHT; i++){
        for(int j = 1; j <= HEIGHT; j++)
        printf("%d * %d = %d\t", i, j, i*j);
        printf("\n");
    }
    return 0;
}
