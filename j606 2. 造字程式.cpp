#include<iostream>
using namespace std;

int main(void)
{
    short len,r,n;

    cin>>len>>r>>n;
    string ss;
    string mm;
    string tt[25]={};

    cin>>ss;
    mm = ss;
    for(short i=0;i<r;i++)
    {
        ss = mm;
        int a[25]={};
        for(short j=0;j<len;j++)
        {
            cin>>a[j];
        }

        for(short j=0;j<len;j++)
        {
            mm[a[j]-1] = ss[j];
        }
        tt[i] = mm;
    }

    for(short i=0;i<n;i++)
    {
        for(short j=0;j<r;j++)
        {
            cout<<tt[j][i];
        }
        cout<<'\n';
    }


    return 0;
}
