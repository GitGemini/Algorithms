#include <stdio.h>
#include <string.h>

#define maxn 5

const char* inst = "ABLR";
const int dir[4][2] = {{-1, 0},{1, 0},{0, -1},{0, 1}};

int main(){
    int T=0;
    char s[maxn][maxn]={0};
    char c;
    while((s[0][0]=getchar())!='Z'){//Z 为输入结束的标记

        int i, j, bi, bj;
        //1.读取矩阵输入
        for(i=0;i<maxn;i++){
            for(j=0;j<maxn;j++){
                if(!i  && !j) continue;//跳过第一格
                s[i][j] = getchar();
                if(s[i][j]==' ') {bi=i; bj=j;}
            }
            if(s[i][maxn-1]=='\n'){
                s[i][j]=' ';
                bi=i; bj=j;
            }
            getchar();//读取 行末的换行
        }
        //2. 读取指令序列
        int legal = 1;
        while((c=getchar())!='0'){
            int k;
            for(k=0;k<4;k++){
                if(inst[k]==c) break;
            }
            if(k==4){
                legal = 0;
            } else {
                //求出要交换的坐标
                int ni = bi+dir[k][0], nj = bj+dir[k][1];
                //判断坐标是否合法
                if(ni>=0 && ni<maxn && nj>=0 && nj<maxn){
                    s[bi][bj] = s[ni][nj];
                    s[ni][nj] = '0';
                    bi=ni; bj=nj;
                } else {
                    legal = 0;
                }
            }
        }

        //3.打印结果
        printf("Puzzle #%d\n", ++T);
        if(!legal){
            printf("This puzzle has no final configuration.\n");
            return 0;
        }
        for(i=0;i<maxn;i++){
            for(j=0;j<maxn;j++){
                printf("%c", s[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

