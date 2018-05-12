#include <stdio.h>
#include <string.h>

#define maxn 10

int main(){
    freopen("data.in", "r", stdin);
    while(1){
        char s[maxn][maxn+1]={0};
        int pos[maxn][maxn+1]={0};
        int r, c, cnt=0, kase=0;
        scanf("%d", &r);
        if(r==0)
            break;
        scanf("%d", &c);

        int i,j;
        for(i=0;i<r;i++)
            scanf("%s", s[i]);

        //首先判断 标号
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if((i==0 || j==0) && (s[i][j]!='*'))
                    pos[i][j]=++cnt;
                else if(s[i][j]!='*' && s[i][j-1]=='*')
                    pos[i][j]=++cnt;
                else if(s[i][j]!='*' && s[i-1][j]=='*')
                    pos[i][j]=++cnt;
                else
                    pos[i][j]=0;
            }
        }


        if(kase!=1)
            printf("\n");

        printf("Puzzle #%d:\n", ++kase);
        printf("Across:\n");
        //寻找 Across
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(pos[i][j]!=0){
                    printf("%3d:", pos[i][j]);
                    while(s[i][j]!='*' && j<c){
                        printf("%c", s[i][j++]);
                    }
                    printf("\n");
                }
            }
        }

        printf("\nDown:\n");
        //寻找 Across
        for(j=0;j<c;j++){
            for(i=0;i<r;i++){
                if(pos[i][j]!=0){
                    printf("%3d:", pos[i][j]);
                    while(s[i][j]!='*' && i<r){
                        printf("%c", s[i++][j]);
                    }
                    printf("\n");
                }
            }
        }
    }

    return 0;
}

