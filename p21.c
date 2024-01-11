#include <stdio.h>

int main(){
    float n;
    float max = 0;
    float min = 0;
    for(int i=0;i<10;i++){
        scanf("%f", &n);
        if(n>max) max = n;
        if (n<min) min = n;
    }

    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
    return 0;
}