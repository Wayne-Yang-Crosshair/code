#include<iostream>

#define U unsigned long long

using namespace std;

float convert(int id, int h, int m, float a)
{
    if(id == 0)
    {
        if(h>=18 || (h==0 && m==0))
        {
            a *=0.7;
        }
    }
    else if(id == 1)
    {
        if(h>=10 || (h==0 && m==0))
        {
            a *= 0.7;
        }
    }
    else if(id == 2)
    {
        if((h>=10 && h<=16) || (h>=20) || (h==0 && m==0) || h==17 && m==0)
        {
            a *= 0.65;
        }
    }
    else if(id == 3)
    {
        if((h>=17 && h<=21) || (h==16 && m>=30) || (h==22 && m<=30))
        {
            a *= 0.6;
        }
    }

    return a;
}


int main(void)
{
    U sum=0;
    int n,id,h,m;
    float a;
    cin>>n;

    for(short i=0;i<n;i++)
    {
        cin>>id>>h>>m>>a;
        sum += convert(id,h,m,a);
    }

    cout<<sum;

    return 0;
}
