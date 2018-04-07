#include <stdio.h>

int main(void)
{
    float x, accum;
    char operator;

    scanf("%f %c", &accum, &operator);
    if(operator == 'S')
    {
        printf("= %.1f\n", accum);
        while(operator != 'E')
        {
            scanf("%f %c", &x, &operator);
            switch(operator)
            {
            case '+':
                printf("= %.1f\n", accum+= x);
                break;
            case '-':
                printf("= %.1f\n", accum-= x);
                break;
            case '*':
                printf("= %.1f\n", accum*= x);
                break;
            case '/':
                if(x == 0)
                    printf("Error\n");
                else
                    printf("= %.1f\n", accum/= x);
                break;
            case 'S':
                accum = x;
                printf("= %.1f\n", accum);
                break;
            default:
                if(operator != 'E' && operator != 'S')
                    printf("operator error\n");
            }
        }
    } else if(operator != 'S' && operator !='E')
    {
        printf("give value to the accumulator\n");
    }

    return 0;
}