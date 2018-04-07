#include <stdio.h>
int main() 
{
    float zarplata, chasy, nalogi;
    printf("Общее число часов: ");
    scanf("%f", &chasy);
    if (chasy > 40)
    {
        zarplata = chasy*10 + (chasy-40)*1.5 ;
        
    } 
    else
    {
        zarplata = chasy*10; 
        
    }
    if (zarplata <= 300)
    {
        nalogi = zarplata*0.15;
        
    } 
    else if(zarplata > 300 && zarplata <=450)
    {
        nalogi = 45 + (zarplata-300)*0.2;
        
    }
    if (zarplata > 450) 
    {
        nalogi = 45 + 30 + (zarplata-450)*0.25;
        
    } 
    zarplata = zarplata - nalogi;
    printf("Зарплата: $%f\n", zarplata);
    printf("Налоги: $%f", nalogi);
    return 0;
    
}