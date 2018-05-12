#include <stdio.h>
#include <string.h>

#define maxn 25

int n, k, m; //剩余人数
int a[maxn]={1};

/**
* p 出发位置
* d 步长 -1表示顺时针走
* t 走几步
*/
int go(int p, int d, int t){
    while(t--){
        do{
            p=(p+d+n)%n;
        } while(a[p]==0);//走到下一个非0数字
    }
    return p;
}

int main(){
    freopen("data.in", "r", stdin);
    while(scanf("%d%d%d", &n, &k, &m)==3 && n){
        for(int i=0;i<n;i++) a[i]=i+1;
        int left=n; //剩余人数

        int p1=n-1, p2=0;
        while(left){
            p1 = go(p1, 1, k);
            p2 = go(p2, -1, m);
            printf("%3d", p1+1);
            left--;
            if(p2!=p1){printf("%3d", p2+1); left--;}
            a[p1] = a[p2] = 0;
            if(left) printf(",");
        }
        printf("\n");
    }

    return 0;
}

