#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{

    int a[10005]={};

    int n,i=0;
    while(cin>>n)
    {
        a[i] = n;
        i++;
    }

    sort(a,a+i);

    for(int k=0;k<i;k++)
    {
        cout<<a[k]<<" ";
    }

    return 0;
}
