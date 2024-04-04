#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{

    int n,m;
    int a[25][25]={{}};
    int b[25]={};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
        sort(a[i],a[i]+m);
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += a[i][m-1];
    }
    cout<<sum<<'\n';

    int h=0;
    for(int i=0;i<n;i++)
    {
        if(sum % a[i][m-1] == 0)
        {
            b[h] = a[i][m-1];
            h++;
        }
    }
    if(h != 0)
    {
        cout<<b[0];
        for(int i=1;i<h;i++)
        {
            cout<<" "<<b[i];
        }
    }else
    {
        cout<<"-1";
    }


    return 0;
}
