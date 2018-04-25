#include <stdio.h>

int main()
{
    int a, b;
    int c, kase=0;
    while((scanf("%d%d%d", &a, &b, &c)==3) && !(a==0 && b==0 && c==0))
    {
        printf("Case %d: %d.", ++kase, a/b);
        a%=b;
        for(int i=1;i<c;i++)
        {
           printf("%d", a*10/b);
           a=a*10%b;
        }
        if(a*10%b*10/b<5)//判断最后一位是否需要进位
          printf("%d", a*10/b);
        else
          printf("%d", a*10/b+1);

        printf("\n");
    }
    return 0;
}
