#include <stdio.h>
 
int main(void) {
	int i, j, result;
	i = 365;
	j = 7;
	result = i + j - i % j;
	printf("result=%i\n", result);
	i = 12258;
	j = 23;
	result = i + j - i % j;
	printf("result=%i\n", result);
	i = 996;
	j = 4;
	result = i + j - i % j;
	printf("result=%i\n", result);
 
	return 0;
}