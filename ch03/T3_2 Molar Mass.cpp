#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* name="CHON";
double weight[] = {12.01, 1.008, 16.00, 14.01};

int main(){
    int T;
    char s[85];
    scanf("%d", &T);
    while(T--){
        scanf("%s", s);
        double sum = 0;
        int num,i=0;
        while(s[i]){
            int j;
            //寻找当前元素的位置
            for(j=0;j<4;j++){
                if(s[i]==name[j])
                    break;
            }
            num = 1;//默认为1个
            if(isdigit(s[++i])) num = (s[i++]-'0');
            if(isdigit(s[i])) num = num*10 + (s[i++]-'0');
            sum += num*weight[j];
        }

        printf("%s weight: %.3lf", s, sum);
    }

    return 0;
}

