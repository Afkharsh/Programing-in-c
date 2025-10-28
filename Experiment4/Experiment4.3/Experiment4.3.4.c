#include <stdio.h>
int main() {
 int rows = 5;
 int i, j;
 printf ("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
 printf("\n--\n");
 for(i = 1; i <= rows; i++) {
  for(j = i; j >= 1; j--) {
   printf("%d", j);
  }
  printf("\n");
 }
 return 0;
}
