#include <stdio.h>
#include <string.h>

int main(){
    int T, n, i;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        int res[10] = {0};
        int num;
        for(i=1;i<=n;i++){
            num = i;
            while(num>0){
                res[num%10]++;
                num/=10;
            }
        }
        for(i=0;i<10;i++){
            printf("%d: %d\n", i, res[i]);
        }
    }

    return 0;
}

