#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n, factorial_n;
	factorial_n = 1;
	printf("0!=1 \n");

	for(n = 1; n <=10; ++n){
		i = 1;
		while(i <= n ){
			factorial_n = factorial_n * i;
			++i;
		}
		printf("!%i = %i \n", n, factorial_n);
		factorial_n = 1;

	}
	return 0;
}