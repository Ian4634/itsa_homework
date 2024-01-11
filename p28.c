#include <stdio.h>

int check_special(int special_arr[8], int guess_arr[8], int *prize){
    int is_special = 1;
    
    for(int i=0;i<8;i++){
        if(special_arr[i] != guess_arr[i]){
            is_special = 0;
            break;
        }
    }

    if(is_special == 1){
        *prize += 2000000;
        return 1;
    }else{
        return 0;
    }
}
int check_head(int head1_arr[8], int head2_arr[8], int head3_arr[8], int guess_arr[8], int *prize){
    int is_head1 = 1;
    int is_head2 = 1;
    int is_head3 = 1;
    for(int i=0;i<8;i++){
        if(guess_arr[i] != head1_arr[i]){
            is_head1 = 0;
            break;
        }
    }

    for(int i=0;i<8;i++){
        if(guess_arr[i] != head2_arr[i]){
            is_head2 = 0;
            break;
        }
    }

    for(int i=0;i<8;i++){
        if(guess_arr[i] != head3_arr[i]){
            is_head3 = 0;
            break;
        }
    }

    if(is_head1 || is_head2 || is_head3){
        *prize += 200000;
        return 1;
    }else{
        return 0;
    }
}
int check_second(int head1_arr[8], int head2_arr[8], int head3_arr[8], int guess_arr[8], int *prize){
    int is_head1 = 1;
    int is_head2 = 1;
    int is_head3 = 1;
    for(int i=1;i<8;i++){
        if(guess_arr[i] != head1_arr[i]){
            is_head1 = 0;
            break;
        }
    }

    for(int i=1;i<8;i++){
        if(guess_arr[i] != head2_arr[i]){
            is_head2 = 0;
            break;
        }
    }

    for(int i=1;i<8;i++){
        if(guess_arr[i] != head3_arr[i]){
            is_head3 = 0;
            break;
        }
    }

    if(is_head1 || is_head2 || is_head3){
        *prize += 40000;
        return 1;
    }else{
        return 0;
    }
}



int check_third(int head1_arr[8], int head2_arr[8], int head3_arr[8], int guess_arr[8], int *prize){
    int is_head1 = 1;
    int is_head2 = 1;
    int is_head3 = 1;
    for(int i=2;i<8;i++){
        if(guess_arr[i] != head1_arr[i]){
            is_head1 = 0;
            break;
        }
    }

    for(int i=2;i<8;i++){
        if(guess_arr[i] != head2_arr[i]){
            is_head2 = 0;
            break;
        }
    }

    for(int i=2;i<8;i++){
        if(guess_arr[i] != head3_arr[i]){
            is_head3 = 0;
            break;
        }
    }

    if(is_head1 || is_head2 || is_head3){
        *prize += 10000;
        return 1;
    }else{
        return 0;
    }
}

int check_fourth(int head1_arr[8], int head2_arr[8], int head3_arr[8], int guess_arr[8], int *prize){
    int is_head1 = 1;
    int is_head2 = 1;
    int is_head3 = 1;
    for(int i=3;i<8;i++){
        if(guess_arr[i] != head1_arr[i]){
            is_head1 = 0;
            break;
        }
    }

    for(int i=3;i<8;i++){
        if(guess_arr[i] != head2_arr[i]){
            is_head2 = 0;
            break;
        }
    }

    for(int i=3;i<8;i++){
        if(guess_arr[i] != head3_arr[i]){
            is_head3 = 0;
            break;
        }
    }

    if(is_head1 || is_head2 || is_head3){
        *prize += 4000;
        return 1;
    }else{
        return 0;
    }
}

int check_fifth(int head1_arr[8], int head2_arr[8], int head3_arr[8], int guess_arr[8], int *prize){
    int is_head1 = 1;
    int is_head2 = 1;
    int is_head3 = 1;
    for(int i=4;i<8;i++){
        if(guess_arr[i] != head1_arr[i]){
            is_head1 = 0;
            break;
        }
    }

    for(int i=4;i<8;i++){
        if(guess_arr[i] != head2_arr[i]){
            is_head2 = 0;
            break;
        }
    }

    for(int i=4;i<8;i++){
        if(guess_arr[i] != head3_arr[i]){
            is_head3 = 0;
            break;
        }
    }

    if(is_head1 || is_head2 || is_head3){
        *prize += 1000;
        return 1;
    }else{
        return 0;
    }
}

int check_sixth(int head1_arr[8], int head2_arr[8], int head3_arr[8], int guess_arr[8], int *prize){
    int is_head1 = 1;
    int is_head2 = 1;
    int is_head3 = 1;
    for(int i=5;i<8;i++){
        if(guess_arr[i] != head1_arr[i]){
            is_head1 = 0;
            break;
        }
    }

    for(int i=5;i<8;i++){
        if(guess_arr[i] != head2_arr[i]){
            is_head2 = 0;
            break;
        }
    }

    for(int i=5;i<8;i++){
        if(guess_arr[i] != head3_arr[i]){
            is_head3 = 0;
            break;
        }
    }

    if(is_head1 || is_head2 || is_head3){
        *prize += 200;
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int special;
    int special_arr[8];
    int head1;
    int head2;
    int head3;
    int head1_arr[8];
    int head2_arr[8];
    int head3_arr[8];

    int n;
    int prize = 0;
    scanf("%d", &special);
    scanf("%d", &head1);
    scanf("%d", &head2);
    scanf("%d", &head3);

    scanf("%d", &n);
    int count[7] = {0};
    int guess[n];
    int guess_arr[n][8];
    for(int i=0;i<n;i++){
        scanf("%d", &guess[i]);
    }

    // make special
    for(int i=7;i>=0;i--){
        special_arr[i] = special%10;
        special/=10;
    }
    // make head1
    for(int i=7;i>=0;i--){
        head1_arr[i] = head1%10;
        head1/=10;
    }

    // make head2
    for(int i=7;i>=0;i--){
        head2_arr[i] = head2%10;
        head2/=10;
    }

    // make head3
    for(int i=7;i>=0;i--){
        head3_arr[i] = head3%10;
        head3/=10;
    }

    // make guess 
    for(int i=0;i<n;i++){
        for(int j=7;j>=0;j--){
            guess_arr[i][j] = guess[i] % 10;
            guess[i] /= 10;
        }
    }

    for(int i=0;i<n;i++){
        if(check_special(special_arr, guess_arr[i],&prize)){
            //printf("is special\n");
            count[0]++;
        }else if(check_head(head1_arr, head2_arr, head3_arr, guess_arr[i], &prize)){
            //printf("is head\n");
            count[1]++;
        }else if(check_second(head1_arr, head2_arr, head3_arr, guess_arr[i], &prize)){
            //printf("is second\n");
            count[2]++;
        }else if(check_third(head1_arr, head2_arr, head3_arr, guess_arr[i], &prize)){
            //printf("is third\n");
            count[3]++;
        }else if(check_fourth(head1_arr, head2_arr, head3_arr, guess_arr[i], &prize)){
            //printf("is fourth\n");
            count[4]++;
        }else if(check_fifth(head1_arr, head2_arr, head3_arr, guess_arr[i], &prize)){
            //printf("is fifth\n");
            count[5]++;
        }else if(check_sixth(head1_arr, head2_arr, head3_arr, guess_arr[i], &prize)){
            //printf("is sixth\n");
            count[6]++;
        }
    }
    printf("%d %d %d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4], count[5], count[6]);
    printf("%d\n", prize);
    return 0;
}