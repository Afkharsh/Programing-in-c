#include <stdio.h>
int main() {
 printf ("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
 int num = 1;
 int rows = 4;
 int i, j;
 for(i = 1; i <= rows; i++) {
  for(j = 1; j <= i; j++) {
   if (i==4 && (j == 2 || j == 3)) {
    printf("9");
   } else {
    printf("%d ", num);
    num++;
   }
  }
  printf("\n");
 }
 return 0;
}
