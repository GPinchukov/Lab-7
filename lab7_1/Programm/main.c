#include <stdio.h> 
#include <stdlib.h> 

int check_ord(const int matrix[], int K){ 
int i = 1; 
while((i < K) && (matrix[i - 1] >= matrix[i])) 
++i; 
return (i == K); 
} 

void sort(int matrix[], int K){ 
int i, j; 
for(i = 0, j = K - 1; i < j; --j, ++i){ 
int buf = matrix[j]; 
matrix[j] = matrix[i]; 
matrix[i] = buf; 
} 
} 

int main(){ 
srand(time(NULL)); 
const int K = 3; 
int matrix[K][K]; 
int i, j; 
printf("Enter Elements:\n"); 
for(i = 0; i < K; ++i){ 
for(j = 0; j < K; ++j){ 
scanf("%d", &matrix[i][j]); 
} 
} 
printf("Matrix: \n"); 
for(i = 0; i < K; ++i){ 
for(j = 0; j < K; ++j){ 
printf("%d ", matrix[i][j]); 
} 
printf("\n"); 
} 
for(i = 0; i < K; ++i){ 
if(check_ord(matrix[i], K)){ 
sort(matrix[i], K); 
break; 
} 
} 
printf("\n"); 
printf("Transofrm matrix:\n"); 
for(i = 0; i < K; ++i){ 
printf("\n"); 
for(j = 0; j < K; ++j) 
printf("%d ", matrix[i][j]); 
} 
return 0; 
}
