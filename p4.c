#include <stdio.h>

/*
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，
但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，
未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，
請撰寫程式計算共需繳交的停車費。
*/
int main(){
    int start_h, start_m, end_h, end_m;
    scanf("%d %d %d %d", &start_h, &start_m, &end_h, &end_m);
    int cost = 0;
    int total_m = (end_h - start_h)*60 + (end_m-start_m);
    
    for(int i=0;i<4 && total_m >=30;i++){
        cost+=30;
        total_m -= 30;
    }


    for(int i=0;i<4 && total_m >=30;i++){
        cost+=40;
        total_m-=30;
    }

    while (total_m>30){
        cost+=60;
        total_m-=30;
    }

    printf("%d\n", cost);
    return 0;
}