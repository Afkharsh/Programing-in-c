#include <stdio.h>
int main(){
    int L;
    int B;
    int Area;
    int perimeter;
    printf ("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    printf("enter the value of Length :");
    scanf("%d",&L);
    printf("enter the value of Breath :");
    scanf("%d",&B);
    perimeter=2*(L+B);
    printf("Perimeter of Rectangle = %d\n",perimeter);
    Area=L*B;
    printf("Area of rectangle = %d\n",Area);
    return 0;
}
