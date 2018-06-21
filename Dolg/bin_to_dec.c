/*Param 46. Описать функцию целого типа, определяющую целое
 неотрицательное число по его строковому представлению в двоичной системе счисления  */


#include <stdio.h>
#include <math.h>    

int bin_to_dec(char *str);

int main(void)
{
    char str_0[] = "0";
    char str_13[] = "1101";
    char str_69[] = "1000101";
    char str_228[] = "11100100";
    char str_255[] = "11111111";

    printf("%s = %10i;\n", str_0, bin_to_dec(str_0));
    printf("%s = %7i;\n", str_13, bin_to_dec(str_13));
    printf("%s = %4i;\n", str_69, bin_to_dec(str_69));
    printf("%s = %i;\n", str_228, bin_to_dec(str_228));
    printf("%s = %i;\n", str_255, bin_to_dec(str_255));

    return 0;
}

int bin_to_dec(char str[])
{
    int ch_amount = 0;      // Количество символов в строке
    int integer_rpr = 0;    // Соответствующее целое значение в десятичной системе

    /*Выясняем количество элементов в строке.
    Оно нужно, чтобы при переводе в десятичное значение
    выстроить ограничивающее условие для цикла*/
    for (int i = 0, i_ch = '0'; i_ch != '\0'; ++i, ++ch_amount)
    {
        i_ch = str[i];
    }

    /*Перевод строки в соответстующее целое число*/
    for (int i = 0; i <= (ch_amount - 2); ++i)
    {
        integer_rpr += (str[i] - 48) * pow(2, ch_amount - 2 - i);
    }

    return integer_rpr;
}
