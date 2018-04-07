#include <stdio.h>
 
void strcat(char *l1,char *l2);
 
int main(void)
{
  char l1[100]="Cet ";
  char l2[]="amour";
  strcat(l1,l2);
  printf("%s",l1);
  return 0;
}
 
void strcat(char *s,char *t)
{
  while ((*s++)!='\0')
    ;
  --s;
  while ((*s++=*t++)!='\0')
    ;
}