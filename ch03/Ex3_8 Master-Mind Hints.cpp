#include <stdio.h>

#define maxn 1010

int main(){
    int n, a[maxn], b[maxn];
    int kase=0;
    while(scanf("%d", &n)==1 && n){//n=0ʱ��������
        printf("Game %d", ++kase);

        //��ȡ������
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);

        while(1){
            int A = 0, B = 0;
            //��ȡ�²�����
            for(int i=0;i<n;i++){
                scanf("%d", &b[i]);
                if(a[i]==b[i]) A++;//ͳ�� A
            }
            //�����Ĳ²����в�����0������ֻ�жϵ�һ�����Ƿ�Ϊ0����
            if(b[0]==0) break;
            for(int d=0;d<=9;d++){
                int c1=0,c2=0;//ͳ������d�ڴ����кͲ²������и����ֶ��ٴ�
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

