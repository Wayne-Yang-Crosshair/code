#include<iostream>
using namespace std;

int main(void)
{
    int t,n,h,L=0,R=0,ML=105,MR=-105;
    cin>>t>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        if(t>h)
        {
            L++;
            if(ML>h)
            {
                ML=h;
            }
        }else{
            R++;
            if(MR<h)
            {
                MR=h;
            }
        }
    }

    if(L<R)
    {
        cout<<R<<" "<<MR;
    }else{
        cout<<L<<" "<<ML;
    }

    return 0;
}
