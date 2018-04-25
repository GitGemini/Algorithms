#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d",&n);

    int row=2*n-1;//第一列‘#’个数
    if(n>20)
        return 0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=i;j<row-i;j++)
            printf("#");

        printf("\n");
    }
    return 0;
}
