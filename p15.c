#include <stdio.h>
#include <ctype.h>

// 字母出現次數

int main(){
    char ch;
    int word_count = 0;
    int count[26] = {0};
    while(scanf("%c", &ch) != EOF){
        if(ch == ' ') {
            word_count++;
            continue;
        }

        if(isupper(ch)){
            int ascii = ch;
            count[ascii-65] += 1;
        }else{
            int ascii = ch;
            count[ascii-97] += 1;
        }
    }
    
    printf("%d\n", word_count+1);
    for(int i=0;i<26;i++){
        if(count[i] != 0){
            printf("%c : %d\n", i+97, count[i]);
        }
    }
    return 0;
}