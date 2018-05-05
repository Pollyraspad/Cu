#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char strfirst[100];
    char strsecond[100];
    FILE *one, *two, *com ;
    one = fopen("1.txt", "r");
    two = fopen("2.txt", "r");
    if(one != NULL) {
        fgets(strfirst, 100, one);
    
}
else {
    fprintf(stderr, "error\n");
}
if(two != NULL) {
        fgets(strsecond, 100, two);
    
}
else{
    fprintf(stderr, "error\n");
    
}
fprintf(stdout, "%s%s",strfirst , strsecond);
return 0;
    
}