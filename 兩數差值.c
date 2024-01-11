#include <stdio.h>
#include <stdlib.h>
int get_input(int arr[7]);
int *selection(int *arr_old, int len);
int ten_to_the_power(int n);
int main(){
    int arr[7];
    int len;
    len = get_input(arr);

    int *min_max = selection(arr, len);
    int max = 0;
    int min = 0;
    for(int i=0;i<len;i++){
        max += min_max[i]*ten_to_the_power(i);
    }

    for(int i=len-1;i>=0;i--){
        min += min_max[len-1-i] * ten_to_the_power(i);
    }
    printf("%d", max - min);
    return 0;
}

int *selection(int *arr_old, int len){
    int *arr_new = malloc(sizeof(int ) *len);
    // copy old to new
    for(int i=0;i<len;i++){
        arr_new[i] = arr_old[i];
    }
    for(int i=0;i<len;i++){
        int min_index = i;
        for(int j=i+1;j<len;j++){
            if(arr_new[j]<arr_new[min_index]){
                min_index = j;
            }
        }
        // swap 
        if(min_index != i){
            // swap
            int temp = arr_new[i];
            arr_new[i] = arr_new[min_index];
            arr_new[min_index] = temp;
        }
    }
    return arr_new;
}
int get_input(int arr[7]){
        // get input
    int i=0;
    while (1) {
        // Read an integer from the user
        int result = scanf("%d", &arr[i++]);

        // Check if scanf successfully read an integer
        if (result !=1){
            while (getchar() != '\n');
        }

        // Check if the user pressed Enter to finish
        if (getchar() == '\n') {
            break;
        }
    }
    return i;
}

int ten_to_the_power(int n){
    int sum = 1;
    for(int i=0;i<n;i++){
        sum *=10;
    }
    return sum;
}