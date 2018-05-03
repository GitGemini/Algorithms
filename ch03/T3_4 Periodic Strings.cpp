#include <stdio.h>
#include <string.h>

int isEqual(const char* s, int k){
    int r = strlen(s)/k;//如果以 k 为周期会有几次重复
    for(int i=1;i<r;i++){
        for(int j=0;j<k;j++){
            if(s[j]!=s[i*k+j]){//出现不相等的即 不是周期
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int T, i;
    scanf("%d", &T);
    char s[85];
    while(T--){
        scanf("%s", s);
        int len = strlen(s);
        for(i=1;s[i];i++){
            if((s[i]==s[0])&&(len%i==0)){
                if(isEqual(s, i)){
                    len = i;
                    break;
                }
            }
        }
        printf("%d\n", len);
    }

    return 0;
}

