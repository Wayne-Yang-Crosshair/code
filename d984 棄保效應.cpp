#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{

    unsigned long long N;

    while(cin>>N)
    {
        unsigned long long a[3]={};
        char S[3] = {'A','B','C'};
        a[0] = N;
        cin>>a[1]>>a[2];

        for(short i=0;i<2;i++)
        {
            for(short j=i+1;j<3;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    swap(S[i],S[j]);
                }
            }
        }

        a[1] += a[0];
        a[0] = 0;
        if(a[1] > a[2])
        {
            swap(a[1],a[2]);
            swap(S[1],S[2]);
        }

        cout<<S[2]<<'\n';
    }

    return 0;
}
