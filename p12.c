#include <stdio.h>

int rec(int n){
    if(n == 0){
        return 1;
    }else if(n==1){
        return 2;
    }else{
        return rec(n-1) + rec(n/2);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int ans = rec(n);
    printf("%d\n", ans);
    return 0;
}