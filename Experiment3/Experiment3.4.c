#include <stdio.h>  
int main(){  
    int x1,y1,x2,y2,x3,y3;  
    printf("Name- HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");  
    printf("enter first pair of coordinates:");  
    scanf("%d %d",&x1,&y1);  
  
    printf("enter second pair of coordinates:");  
    scanf("%d %d",&x2,&y2);  
  
    printf("enter third pair of coordinates:");  
    scanf("%d %d",&x3,&y3);  
  
    if(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)==0){  
        printf("The given points are collinear");  
    }  
  
    else{  
        printf("The given points are not collinear");  
    }  
    return 0;  
}
