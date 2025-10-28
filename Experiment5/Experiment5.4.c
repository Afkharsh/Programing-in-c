#include <stdio.h>
void counter() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
int main() {
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    counter();
    counter();
    counter();
    return 0;
}
