#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int triangularNumber, n;

    for( n = 5; n <= 50; n += 5) {
        triangularNumber = n*(n+1)/2;
        printf("n = %i;   triangularNumber = %i; \n", n, triangularNumber);
    }

    return 0;
}