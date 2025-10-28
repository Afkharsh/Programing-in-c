#include <stdio.h>
int x = 10;
void func1() {
    printf("Inside func1, x = %d\n", x);
}
void func2() {
    printf("Inside func2, x = %d\n", x);
}
int main() {
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    printf("In main, x = %d\n", x);
    func1();
    func2();
    return 0;
}
