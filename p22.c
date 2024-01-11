#include <stdio.h>

// 圈圈叉叉
int main() {
    int board[3][3];

    // Initialize the board with -1 (indicating an empty cell)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    // Check if there is a winner or if it's a draw and print the result
    int winner = 0;

    // check row
    for(int i=0;i<3;i++){
        if(board[i][0] == 0 && board[i][1] == 0 && board[i][2] == 0) winner = 1;
        if(board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1) winner = 1;
    }

    // check col
    for(int i=0;i<3;i++){
        if(board[0][i] == 0 && board[1][i] == 0 && board[2][i] == 0) winner = 1;
        if(board[0][i] == 1 && board[1][i] == 1 && board[2][i] == 1) winner = 1;
    }

    int is_0 = 0;
    int is_1 = 0;
    // check diagnose
    for(int i=0;i<3;i++){
        if(board[i][i] == 0)is_0++;
        else is_1++;
    }

    // check other diagnose
    if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1) winner = 1;
    if(board[0][2] == 0 && board[1][1] == 0 && board[2][0] == 0) winner = 1;
    

    if(is_1>=3 || is_0 >=3) winner = 1;
    if(winner) printf("True\n");
    else printf("False\n");

    return 0;
}
