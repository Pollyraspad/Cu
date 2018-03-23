#include <stdio.h>
#include <limits.h>//объявляются макросы для целых типов
int main()
{
    printf("signed char %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char 0 to %d\n", UCHAR_MAX);
    printf("signed short int %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int 0 to %d\n", USHRT_MAX);
    printf("signed int %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int 0 to %u\n", UINT_MAX);
    printf("signed long int %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int 0 to %lu\n", ULONG_MAX);
 
    return 0;
}