#include<iostream>
using namespace std;

int main(void)
{
    int L0,L1,x0,x1,y0,y1;
    cin>>L0>>L1>>x0>>y0>>x1>>y1;
    x0--,x1--,y0--,y1--;
    char a[20][50] = {{}};

    for(int i=0;i<L0;i++)
    {
        for(int j=0;j<L1;j++)
        {
            cin>>a[i][j];
        }
    }


    if(x0 == x1)
    {
        for(int i=y0;i<=y1;i++)
        {
            cout<<a[x0][i];
        }
    }
    else if(y0 == y1)
    {
        for(int i=x0;i<=x1;i++)
        {
            cout<<a[i][y0];
        }
    }
    else if(x0 != x1 && y0 != y1)
    {
        for(int i=x0,j=y0;i<=x1 || j<=y1;i++,j++)
        {
            cout<<a[i][j];
        }
    }

    return 0;
}
