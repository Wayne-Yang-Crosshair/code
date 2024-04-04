#include<iostream>
using namespace std;

int ss(int n,int m,int ex)
{
    int sum=0;

    if(m>=ex && n != 0)
    {
        sum++;
        if(m>=30)
        {
            sum++;
            if(m>=70)
            {
                sum++;
                if(m>=120)
                {
                    sum += 3;
                }
            }
        }

        sum += (m-ex)*3;
        return sum;
    }else{

        return 0;
    }

}
//////////////////////////
int main(void)
{
    int n,m;
    while(cin>>n>>m)
    {

        int ans;

        if(n == 2)
        {
            ans = ss(n,m,8);
        }else
        {
            ans = ss(n,m,10);
        }
        cout<<ans<<'\n';

    }


    return 0;
}
