#include <stdio.h> 
int main(){ 
    int a,b,c; 
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n"); 
    printf("Enter first side:"); 
    scanf("%d",&a); 
    printf("Enter second side:"); 
    scanf("%d",&b); 
    printf("Enter third side:"); 
    scanf("%d",&c); 
    if((a+b>c)&&(a+c>b)&&(b+c>a)){ 
        printf("It is a valid triangle.\n"); 
        if(a==b&&b==c){ 
            printf("It is an Equilateral triangle.\n"); 
        }else if(a==b||b==c||a==c){ 
            if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){ 
                printf("It is an Isosceles Right-angled triangle.\n"); 
            }else{ 
                printf("It is an Isosceles triangle.\n"); 
            } 
        }else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){ 
            printf("It is a Right-angled triangle.\n"); 
        }else{ 
            printf("It is a Scalene triangle.\n"); 
        } 
    }else{ 
        printf("It is NOT a valid triangle.\n"); 
    } 
    return 0; 
} 
