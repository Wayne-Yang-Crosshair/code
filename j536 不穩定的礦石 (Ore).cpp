#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void)
{

    int n,A,a[505]={},M=0,X=0;
    cin>>n>>A;

    for(short i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>M)
        {
            M = a[i];
            X = i;
        }
    }

    if(X-(A/2)<0)
    {
        A += 2*abs(X-(A/2));
    }
    if(X+(A/2)>=n)
    {
        A += 2*abs(X+(A/2) - (n-1));
    }

    for(short i=X-(A/2);i<=X+(A/2);i++)
    {
        if(i>=0 && i<n && i!=X)
        {
            a[X] += a[i];
            a[i] = 0;
        }
    }

    int sum=0;
    for(short i=0;i<n;i++)
    {
        sum += a[i];
    }
    sum -= a[X];

    cout<<a[X]<<" "<<sum;



    return 0;
}
