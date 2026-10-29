//27
/*Кумулятивная сумма (или скользящий итог, cumulative sum) — это последовательная 
сумма чисел в ряду, где на каждом шаге к текущему значению прибавляются все предыдущие элементы*/
//1, 1, 1, 2, 2, 3
#include <stdio.h>

int main(void){
    int c1[8] = {1, 1, 1, 2, 2, 3};

    //printf("%zu", sizeof(c1));

    int sum = 0;
    int c2[8];

    for(int i = 0; i < (sizeof(c1) / sizeof(c1[0])); i++){
        
        for(int j = 0; j < i; j++){
            sum += c1[j];
        }
//        printf("%d \n",sum);

        c2[i] = c1[i] + sum;

        sum = 0;
    }

    for(int k = 0; k < 6; k++)
        printf("%d ", c1[k]);
    printf("\n");
    for(int z = 0; z < 6; z++)
        printf("%d ", c2[z]);
    printf("\n");
    return 0;
}