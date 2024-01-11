#include <stdio.h>

int main(){
    int arr[100];
    int i=0;
    while(1){
        int result = scanf("%d", arr[i++]);
        if (result == EOF) break;
    }
    for(;i>=0;i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
}