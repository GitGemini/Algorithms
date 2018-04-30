#include <stdio.h>

#define maxn 1010

int main(){
    int n, a[maxn], b[maxn];
    int kase=0;
    while(scanf("%d", &n)==1 && n){//n=0时结束输入
        printf("Game %d", ++kase);

        //读取答案序列
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);

        while(1){
            int A = 0, B = 0;
            //读取猜测序列
            for(int i=0;i<n;i++){
                scanf("%d", &b[i]);
                if(a[i]==b[i]) A++;//统计 A
            }
            //正常的猜测序列不会有0，所以只判断第一个数是否为0即可
            if(b[0]==0) break;
            for(int d=0;d<=9;d++){
                int c1=0,c2=0;//统计数字d在答案序列和猜测序列中各出现多少次
                for(int i=0;i<n;i++){
                    if(a[i] == d) c1++;
                    if(b[i] == d) c2++;
                }
                B += (c1<c2)?c1:c2;
            }
            printf("\t(%d,%d)\n", A, B-A);
        }
    }

    return 0;
}

