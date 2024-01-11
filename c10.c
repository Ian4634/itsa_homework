#include <stdio.h>

// selection sort

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf(" %d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i;j<n;j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }

        // swap
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<n;i++){
        if(i!=n-1){
            printf("%d ", arr[i]);
        }else{
            printf("%d\n", arr[i]);
        }
        
    }
    return 0;
}