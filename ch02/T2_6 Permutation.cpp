#include <stdio.h>

int flag[]={1,2,3,4,5,6,7,8,9};

bool isOK(int val)
{
    for(int i=0;i<9;i++)
    {
        if(flag[i]==val)
        {
            flag[i]=-1;
            return true;
        }
    }
    return false;
}

bool isNumOK(int val)
{
    return isOK(val/100)&&isOK(val/10%10)&&isOK(val%10);
}

void resetFlag()
{
    for(int i=0;i<9;i++)
    {
        flag[i]=i+1;
    }
}

int main()
{
    int i, j, k;
    //987/3=329
    for(i=123;i<=329;i++)
    {
        j=i*2;
        k=i*3;
        if(isNumOK(i)&&isNumOK(j)&&isNumOK(k))
        {
            printf("%d %d %d\n", i, j, k);
        }
        resetFlag();
    }

    return 0;
}

