#include <stdio.h>
#define ROW 2
#define COL 5
int mat_a[ROW][COL] = 
{
    {0,9,0,0,0},
    {0,0,0,0,4}
    
}; 
int trans_mat[COL][ROW]; 

void transparacy_matr(int *matA, int *matT, int matArow, int matAcolmn);
void print_matr(int *matriX, int roW, int coL);

int main(void)
{
    int *ptr_matr, *ptr_matr_Tr;
    ptr_matr = mat_a[0];         
    ptr_matr_Tr = trans_mat[0];  
    print_matr(ptr_matr, ROW, COL);    
    transparacy_matr(ptr_matr, ptr_matr_Tr, ROW, COL); 
 
    printf("\n_____________");    
 
    print_matr(ptr_matr_Tr, COL, ROW);  
    return 0;
    
}

void transparacy_matr(int *matA, int *matT, int matArow, int matAcolmn)
{
    int i,j;
    for(i=0; i < matArow; i++)
    for(j=0; j < matAcolmn; j++)
    matT[i + matArow*j] = matA[i*matAcolmn + j];
    }

void print_matr(int *matriX, int roW, int coL)
{
    int i;
    for(i=0; i < roW*coL; i++)
    {
        if(i%coL==0)
        printf("\n");
        printf("  %d", matriX[i]);
        
    }
    
}