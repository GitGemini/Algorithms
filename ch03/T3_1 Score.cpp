#include <stdio.h>
#include <string.h>

#define maxn 85

int main(){
    int T;
    char s[maxn];
    scanf("%d", &T);
    while(T--){
        scanf("%s", s);
        int score = 0, count=0;

        for(int i=0;s[i];i++){
            if(s[i]=='O'){
                score += ++count;
            }else if(s[i]=='X'){
                count=0;
            }
        }
        printf("串 %s 的得分为: %d.", s, score);
    }

    return 0;
}

