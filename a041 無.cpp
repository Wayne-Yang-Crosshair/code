//¥¼§¹¦¨
#include<iostream>
using namespace std;


int main(void)
{
    int n;
    cin>>n;

    int b[1005]={};
    int a[1005]={};
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }

    for(int k=n-1;k>=0;k--)
    {
        cout<<a[k]<<" ";
    }


    return 0;
}
