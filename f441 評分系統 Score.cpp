#include<iostream>
using namespace std;

int main(void)
{
    int n,s;
    cin>>n>>s;
    int a[24]={};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[105][24]={{}};
    for(int i=0;i<m;i++)
    {

        int co =0;
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
            if(b[i][j] == a[j])
            {
                co += 1;
            }
        }
        int sum = co * s;
        cout<<sum<<'\n';


    }

    return 0;
}
