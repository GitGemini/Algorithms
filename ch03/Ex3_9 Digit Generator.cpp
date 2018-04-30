#include <stdio.h>

#define maxn 100005
int ans[maxn]={0};

int main(){
    int n, T;

    for(int m=1;m<maxn;m++){
        int x = m, y = m;
        while(x>0){
            y+=x%10;
            x/=10;
        }
        //if(y>maxn-5) continue;
        if(ans[y] == 0 || m < ans[y])
            ans[y] = m;
    }

    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}

