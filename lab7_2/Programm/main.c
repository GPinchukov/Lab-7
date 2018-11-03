#include <stdio.h> 
#include <string.h> 
int countLetters(); 
int main(void) 
{ 
countLetters(); 
return 0; 
} 
int countLetters() 
{ 
char line[500], c, sim; 
int count = 0, i ; 
printf("Enter string ( ne bolshe 500 simwolow): "); 
scanf("%s", line); 
printf("Enter character: "); 
scanf("%s",&c); 
for(i=0;i<500;i++) { 

if (line[i] == c) count++; 
} 
printf("kol-vo simvola v stroke %d : ", count); 
}
