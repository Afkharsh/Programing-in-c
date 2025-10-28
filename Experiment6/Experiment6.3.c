#include <stdio.h>
int main() {
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n, i, num, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter number to find frequency: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) if(a[i] == num) count++;
    printf("Frequency of %d = %d\n", num, count);
    return 0;
}
