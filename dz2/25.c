#include <stdio.h>
#include <stdint.h>
int main(){

    printf("INT8: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (long long)INT8_MAX-(long long)INT8_MIN)+1;
    printf("UINT8: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(uint8_t), 0, UINT8_MAX, (long long)UINT8_MAX+1);
    printf("INT16: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (long long)INT16_MAX-(long long)INT16_MIN)+1;
    printf("UINT16: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(uint16_t), 0, UINT16_MAX, (long long)UINT16_MAX+1);
    printf("INT32: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX-(long long)INT32_MIN)+1;
    printf("UINT32: size=%lu, min=%d, max=%ld, values=%lld\n", sizeof(uint32_t), 0, (long)UINT32_MAX, (long long)UINT32_MAX+1);
    return 0;
}

//потому что знаковый размер резервирует первый бит под знак минуса, в следствие этого количество различных значений остаётся равным, 
//а диапозон разделяется с учётом того, что не существует -0

//INT8: size=1, min=-128, max=127, values=256
//UINT8: size=1, min=0, max=255, values=256
//INT16: size=2, min=-32768, max=32767, values=65536
//UINT16: size=2, min=0, max=65535, values=65536
//INT32: size=4, min=-2147483648, max=2147483647, values=4294967296
//UINT32: size=4, min=0, max=4294967295, values=4294967296