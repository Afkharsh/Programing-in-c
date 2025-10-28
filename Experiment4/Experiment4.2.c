#include <stdio.h> 
int main() { 
printf ("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6"); 
printf("\n--------------------------------------\n"); 
int num, i; 
printf("Enter a number to print its multiplication table: "); 
scanf("%d", &num); 
printf("\nMultiplication Table of %d:\n", num); 
for (i = 1; i <= 10; i++) { 
printf("%d * %d = %d\n", num, i, num * i); 
} 
return 0; 
}
