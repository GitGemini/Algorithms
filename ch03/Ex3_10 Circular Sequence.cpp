#include <stdio.h>
#include <string.h>

#define maxn 105

int less(const char* s, int p, int q){
    int n=strlen(s);
    char P, Q;
    for(int i=0;i<n;i++){
        P = s[(p+i)%n];
        Q = s[(q+i)%n];
        if(P != Q)
            return P<Q;
    }
    return 0;//ПаµИ
}

int main(){
    int T;
    char s[maxn];
    scanf("%d", &T);
    while(T--){
        scanf("%s", s);
        int ans = 0;
        int n = strlen(s);

        for(int i=1;i<n;i++)
            if(less(s,i,ans)) ans=i;

        for(int i = 0;i<n;i++)
            putchar(s[(i+ans)%n]);
        putchar('\n');
    }

    return 0;
}

