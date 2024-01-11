#include <stdio.h>

int main(){
    int n;
    int a,b,c;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d %d %d", &a, &b,&c);

        // pass 1
        if(a>=60 && b>=60 && c>=60){
            printf("P\n");
            continue;
        }

        // pass 2(two 60, total > 220)
        int sixties = 0;
        if(a >= 60) sixties++;
        if(b>= 60) sixties++;
        if(c >= 60) sixties++;
        if(sixties >= 2 && (a+b+c) >= 220){
            printf("P\n");
            continue;
        }

        // M 1
        if(sixties >= 2) {
            printf("M\n");
            continue;
        }
        // M 2
        int eighties = 0;
        if(a>=80) eighties++;
        if(b>=80) eighties++;
        if(c>=80) eighties++;

        if(sixties<2 && eighties >= 1){
            printf("M\n");
            continue;
        }

        printf("F\n");
    }
    return 0;
}