#include<iostream>
using namespace std;

int main(void)
{
    int r;
    cin>>r;
    for(int k=0;k<r;k++)
    {
        string a[10] = {};
        short b[10]={};
        bool c[10]={};
        for(int i=0;i<10;i++)
        {
            cin>>a[i]>>b[i];
        }

        short M =0;
        for(int i=0;i<10;i++)
        {
            M = max(b[i],M);
        }

        cout<<"Case #"<<k+1<<":"<<'\n';

        for(int i=0;i<10;i++)
        {
            if(M == b[i])
            {
                cout<<a[i]<<'\n';
            }
        }

    }

    return 0;
}
