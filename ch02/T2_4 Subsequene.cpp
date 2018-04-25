#include <stdio.h>

int main()
{
    long long n, m, i;
    int kase=0;
    double sum;
    while((scanf("%lld %lld", &n, &m)==2) && (n!=0 && m!=0))
    {
        sum=0.0;
        for(i=n;i<=m;i++)
        {
            sum += 1.0/(double)(i*i);
        }
        printf("Case %d: %.5f\n", ++kase, sum);
    }
    return 0;
}
