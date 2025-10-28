#include <stdio.h>
int main() {
 int rows = 5;
 int i, space, num;
 printf("Name- HARSH\nSAP ID - 590028742\nCourse- BCA\nBatch- B6");
 printf("\n-----------------\n");
 for (i = 0; i < rows; i++) {
  for (space = 0; space < 2 * i; space++) {
   printf(" ");
  }
  for (num = 1; num <= rows - i; num++) {
  }
  printf("%d", num);
  printf("\n");
 }
 return 0;
}
