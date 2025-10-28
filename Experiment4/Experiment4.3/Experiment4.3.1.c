#include <stdio.h>
int main() {
 int i, j;
 int r = 5;
 printf ("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
 printf("\n-----------\n");
 for (i=1; i<=r; i++) {
  for (j=1; j<=i; j++) {
   printf("%d", i);
  }
  printf("\n");
 }
 return 0;
}
