#include<iostream>
using namespace std;


int main(void)
{

    int a[105]={};

    for(short i=1;i<105;i++)
    {
        a[i-1] = i*i;
    }

    int n;

    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }

        int sum =0;

        for(int i=0;i<n;i++)
        {
            sum += a[i];
        }

        cout<<sum<<'\n';
    }



    return 0;
}
