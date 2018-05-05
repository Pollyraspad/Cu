#include <stdio.h> 

void shift_l(int* arr, int n, int k) { 
int i, t; 
while(k--) { 
t = *arr; 
for(i = 0; i < n - 1; i++) 
arr[i] = arr[i+1]; 
arr[n-1] = t; 
} 
} 

int main(void) { 
int i, arr[] = { -1, 0, 1, 5, 4, 3, 5, 6, 77 }; 
int size = sizeof(arr) / sizeof(arr[0]); 

shift_l(arr, size, 4); 
for(i = 0; i < size; i++) 
printf("%d ", arr[i]); 
putchar('\n'); 
return 0; 
}