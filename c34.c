#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0, min = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    min= arr[0];
    max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    float max_f = max;
    float min_f = min;
    printf("%.2f\n%.2f\n", max_f, min_f);

    return 0;
}