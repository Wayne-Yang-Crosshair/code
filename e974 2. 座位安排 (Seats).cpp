#include<stdio.h>

int main(void)
{
    short x,y,r;

    scanf("%d%d%d",&x,&y,&r);

    short i=1,a[105][105]={},b[105][105]={};

    for(short j=0;j<x;j++)
    {
        for(short k=0;k<y;k++)
        {
            a[j][k] = i;
            b[j][k] = i;
            i++;
        }
    }


    for(short j=0;j<x;j++)
    {
        for(short k=0;k<y;k++)
        {
            printf("%d ",a[(j+(r-1)/2)%x][(k+(r/2))%y]);
        }
        printf("\n");

    }

    return 0;
}
