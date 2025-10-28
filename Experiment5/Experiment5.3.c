#include <stdio.h>
int main() {
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int a = 10;
    {
        int b = 20;
        printf("Inside block: a = %d, b = %d\n", a, b);
    }
    printf("Outside block: a = %d\n", a);
    return 0;
}
