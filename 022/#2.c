#include <stdio.h>
#include <math.h>

void logical_operations(char bin_1[], char bin_2[]);
int decimal(char bin[]);

int main(void)
{
	logical_operations("00110010", "0001011");
	return 0;
}

void logical_operations(char bin_1[], char bin_2[])
{
	int dec_1 = decimal(bin_1);
	int dec_2 = decimal(bin_2);
	printf("~: %i\n", ~dec_1);
	printf("&: %i\n", dec_1 & dec_2);
	printf("|: %i\n", dec_1 | dec_2);
	printf("^: %i\n", dec_1 ^ dec_2);
}

int decimal(char bin[])
{
	int dec = 0;
	int bin_int[8];

	for(int i = 0; i <= 7; ++i)
	{
		if(bin[i] == '1')
			bin_int[i] = 1;
		else bin_int[i] = 0;
	}

	for(int i = 0; i <= 7; i++) {
	  dec = dec + bin_int[i] * pow(2,7-i);
	}

	return dec;
}