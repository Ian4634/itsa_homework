#include <stdio.h>
#include <math.h>

int main(){
    double len;  
  
    while (scanf("%lf", &len) != EOF) {   
        double sum = len*len;
        sum*=10;
        printf("%.1lf\n", round(sum)/10);        
    }  
    return 0;
}