#include<iostream>
using namespace std;

int main(void)
{
    int r;
    int n;


    cin>>r;

    for(int i=0;i<r;i++)
    {
        long long a[10005]={};
        char A,B;
        cin>>A>>B;
        cin>>n;
        for(int j=0;j<n*n;j++)
        {
            cin>>a[j];
        }
        bool yes = true;

        for(int j=0;j<(n*n);j++)
        {
            if(a[j] != a[n*n-1-j] || a[j]<0 || a[n*n-1-j]<0)
            {
                yes = false;
                break;
            }
        }

        cout<<"Test #"<<i+1<<": ";
        if(yes)
        {
            cout<<"Symmetric."<<'\n';
        }else{
            cout<<"Non-symmetric."<<'\n';
        }
    }



    return 0;
}
