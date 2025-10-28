#include <stdio.h>
#include <math.h>
int main() {
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int i;
    double population = 100000;
    for(i = 1; i <= 10; i++) {
        population = population * 1.10;
        printf("Year %d: %.0f\n", i, population);
    }
    return 0;
}
