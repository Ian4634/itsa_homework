#include <stdio.h>
// 是否為迴文
int main(){

    int n;
    while (scanf("%d", &n) != EOF){
        int original_n = n;
        int len = 1;
        while(1){
            n/=10;
            if(n > 0) len++;
            else break;
        }

        int arr[len];

        for(int i=len-1;i>=0;i--){
            arr[i] = original_n%10;
            original_n /= 10;
        }
        int is = 1;
        for(int i=0;i<len;i++){
            
            if(arr[i] != arr[len-1-i]){
                is = 0;
                break;
            }
        }

        if(is) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}