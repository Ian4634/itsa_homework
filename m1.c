#include <stdio.h>

int main(){
    int uper, lower, height;  
  
    while (scanf("%d %d %d", &uper, &lower, &height) != EOF) {  
        double sum = uper + lower;  
        double area=(sum*height)/2;  
        printf("Trapezoid area:%.1f\n", area);  
    }  
    return 0;
}