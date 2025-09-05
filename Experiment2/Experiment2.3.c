#include <stdio.h>
#include <math.h> 
int main() {
    printf ("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    float principal, rate, time, compoundInterest, amount;
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);
    return 0;
}