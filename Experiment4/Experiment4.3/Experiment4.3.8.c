#include <stdio.h>
int main() {
 int rows = 5;
 printf("Name- HARSH\nSAP ID - 590028742\nCourse- BCA\nBatch- B6");
 printf("\n-----------------\n");
 for (int i = 1; i <= rows; i++) {
  int start = rows - i + 1;
  for (int j = start; j <= rows; j++) {
   printf("%d", j);
  }
  printf("\n");
 }
 return 0;
}
