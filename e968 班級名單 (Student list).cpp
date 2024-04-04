#include<iostream>
using namespace std;

int main(void)
{
    int n,a,b,c;

    cin>>n>>a>>b>>c;

    for(int i=n;i>0;i--)
    {
        if(i!=a && i!=b && i!=c)
        {
            cout<<"No. "<<i<<'\n';
        }
    }

    return 0;
}
