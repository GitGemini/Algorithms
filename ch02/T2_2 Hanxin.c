#include <stdio.h>

int main()
{
    int i, a, b, c, kase=0;

    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        for(i=10;i<=100;i++)
        {
            if(i%3==a && i%5==b && i%7==c)
            {
                printf("Case %d: %d\n", ++kase, i);
                break;
            }
        }
        if(i>100)
        {
            printf("Case %d: No answer\n", ++kase);
        }
    }
    return 0;
}
