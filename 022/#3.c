#include <stdio.h>
int bit(int num);
int main()
{
    int number, count;
    puts("Введите число:");
    while(scanf("%d", &number) == 1)
    {
        count = bit(number);
        printf("%d бита содержится\r\n", count);
        puts("Ввидите число еще раз:");
 
    }
    return 0;
 
}
int bit(int num)
{
    int mask = 1;
    int count = 0;
    while(num > 0)
    {
        count += num & mask;
        num >>= 1;
 
    }
    return count;
 
}