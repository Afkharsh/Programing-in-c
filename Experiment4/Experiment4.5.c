#include <stdio.h>
int main() {
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int a, b, c, d, limit = 20;
    for(a = 1; a <= limit; a++) {
        for(b = a; b <= limit; b++) {
            for(c = a + 1; c <= limit; c++) {
                for(d = c; d <= limit; d++) {
                    if(a*a*a + b*b*b == c*c*c + d*d*d)
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", a*a*a + b*b*b, a, b, c, d);
                }
            }
        }
    }
    return 0;
}
