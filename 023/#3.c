#include<stdio.h>
int main(void)
{
    FILE *in, *out;
    int c;
    if ( (in = fopen ("1.txt", "r")) == NULL )
    {
        printf ("Couldn't read %s\n", "1.txt");
        return 1;
        
    }
    if ( (out = fopen ("2.txt", "w")) == NULL )
    {
        printf ("Couldn't copy %s\n", "2.txt");
        return 1;
        
    }
    while ( (c = getc (in)) != EOF )
    putc (c, out);
    fclose (in);
    fclose (out);
    printf ("Success \n");
    return 0;
    
}