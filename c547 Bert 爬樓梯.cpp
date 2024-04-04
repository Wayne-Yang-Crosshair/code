#include<iostream>
using namespace std;

int main(void)
{
    unsigned long long a[10005]={};
    a[0]=1;
    a[1]=2;
    int n;

    while(cin>>n)
    {
        for(int i=2;i<n;i++)
        {
            a[i] = a[i-1] + a[i-2];
            a[i] %= 1000000007;
        }

        cout<<a[n-1]<<'\n';
    }



    return 0;
}
