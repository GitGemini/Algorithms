#include <stdio.h>

int main()
{
    int n, a, b, c;

    {
        a=n/100;
        b=n/10%10;
        c=n%10;
        if(a*a*a+b*b*b+c*c*c==n)
        {
            printf("%d是一个水仙数\n", n);
        }
    }
    return 0;
}
