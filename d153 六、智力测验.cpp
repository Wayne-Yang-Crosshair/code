#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int n,m;
    int a[100005]={};
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }

        sort(a,a+m);

        cout<<a[(m-1)/2]<<'\n';

    }


    return 0;
}
