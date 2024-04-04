#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int a=1,b;
    int M=0;
    for(int j=0;j<n;j++)
    {
        cin>>b;
        a=max(a,b);
        M=max(M,a-b);
    }

    cout<<M;


    return 0;
}
