#include <stdio.h>
#include <stdlib.h>

int main()
{
    int EvenIntegers = 0, OddIntegers = 0;
    float sumEvenIntegers = 0.0, sumOddIntegers = 0.0;
    int number;
    printf("Enter numbers (0 to quit):\n");
    while(scanf("%d", &number), number != 0)
    {
        if(number % 2 == 0)
        {
            EvenIntegers++;
            sumEvenIntegers += number;
        }
        else
        {
            OddIntegers++;
            sumOddIntegers += number;
        }
    }
    printf("Колличество четных: %d\n", EvenIntegers);
    printf("Колличество нечетных: %d\n", OddIntegers);
    printf("Среднее значение четных: %.2f\n", sumEvenIntegers / EvenIntegers);
    printf("Среднее значение нечетных: %.2f\n", sumOddIntegers / OddIntegers);
    return 0;
}