#include<iostream>
using namespace std;

int main(void)
{

    int n;
    int a[20]={1}, b[20]={1};

    cin>>n;

    for(short i=0;i<n-1;i++)
    {
        for(short j=0;j<20;j++)
        {
            b[j] *= 4;
        }

        short j=0;

        while(j<20)
        {
            if(b[j]>9999)
            {
                short k = b[j]/10000;
                b[j] %= 10000;
                b[j+1] += k;
            }

            a[j] += b[j];

            if(a[j]>9999)
            {
                short r = a[j]/10000;
                a[j] %= 10000;
                a[j+1] += r;
            }

            j++;

        }
    }
    bool yes = false;
    for(short i=19;i>=0;i--)
    {
        if(a[i] != 0)
        {
            if(yes)
            {
                if(a[i]<1000)
                {
                    cout<<'0';

                    if(a[i]<100)
                    {
                        cout<<'0';

                        if(a[i]<10)
                        {
                            cout<<'0';
                        }
                    }
                }
            }

            cout<<a[i];
            yes = true;
        }
    }


    return 0;
}
