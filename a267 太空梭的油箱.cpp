#include<iostream>
using namespace std;

int main(void)
{
    int n,num,t,day;

    while(cin>>n)
    {
        if(n == -1)
        {
            break;
        }

        day = 0;
        num = (n+1)*5;
        t = 0;

        while(num > 0)
        {
            num -= n+1;
            t += (n+1)%5;
            n -= (n+1)/5;
            if(t/5 > 0)
            {
                n -= t/5;
                t %= 5;
            }

            day++;
        }
        cout<<day<<'\n';
    }


    return 0;
}
