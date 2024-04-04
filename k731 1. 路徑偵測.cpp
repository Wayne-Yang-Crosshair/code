#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b,A,B,n,l=0,r=0,t=0,D=1,F;

    cin>>n;
    cin>>a>>b;

    for(int i=1;i<n;i++)
    {
        A=a ; B=b;

        cin>>a>>b;

        if( a-A != 0)
        {
            if(a-A >0)
            {
                F = 1;
            }else{
                F = 3;
            }
        }else if(b-B != 0){
            if(b-B >0)
            {
                F = 2;
            }else{
                F = 4;
            }
        }

/*
  2
3   1
  4
*/
        if(D != F)
        {
            if( (D == 1 && F == 4) || (D == 2 && F == 1)
            || (D == 3 && F == 2) || (D == 4 && F == 3)
            )
            {
                r++;
            }
            if( (D == 4 && F == 1) || (D == 1 && F == 2)
            || (D == 2 && F == 3) || (D == 3 && F == 4)
            )
            {
                l++;
            }

            if( (D+F)%2 == 0)
            {
                t++;
            }
        }

        D = F;
    }

    cout<<l<<" "<<r<<" "<<t;

    return 0;
}
