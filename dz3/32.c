#include <stdio.h>
#include <string.h>

//void tester(void);

int main(void){
    char word1[15];
    char word2[15];
/*
    tester(); потому что %s читает набор беспробельных символов, 
а не весь ввод целиком. когда он видит пробел, он ставит символ конец строки
*/
    scanf("%s %s", word1, word2); //не нужен амперсанд потому что это массивы символов
    
    printf("%s%c%s\nTOTAL_LEN: %lu\n", word1,'-',word2,strlen(word1)+strlen(word2));
    return 0;
}

/*

void tester(void){
    char word1[15];
    char word2[15];
    printf("testtestzakoment\n");
    scanf("%s", word1);
    printf("%s\n", word1);
}

*/