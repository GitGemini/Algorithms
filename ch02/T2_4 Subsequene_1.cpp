#include <stdio.h>

int main()
{
    int n, m, i, kase=0;
    double sum;
    while((scanf("%d%d", &n, &m)==2) && (n!=0 && m!=0))
    {
        sum=0.0;
        for(i=n;i<=m;i++)
        {
            sum += (double)1.0/i/i;
        }
        printf("Case %d: %.5f\n", ++kase, sum);
    }
    return 0;
}
