#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    bool yes = true;

    int a[100]={};
    if(n<0)
    {
        yes = false;
    }

    int t = abs(n);
    int ss =0;
    while(t != 0)
    {
        a[ss] = t%10;
        t/=10;
        ss++;
    }
    if(!yes) cout<<"-";
    int L=0;

    for(int i=0;i<ss;i++)
    {
        if(a[ss] != 0 || a[L] != 0)
        {
            cout<<a[i];
        }else{
            L++;
        }
    }

    return 0;
}
