//學習setprecision小數精確度調整函數，搭配fixed
#include<bits\stdc++.h>
using namespace std;

int main(void)
{
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    if(a*e == b*d)
    {
        if(a*f == c*d)
        {
            cout<<"Too many";
        }else{
            cout<<"No answer";
        }
    }else{
        double X = (c*e-b*f)/(a*e-b*d);
        double Y = (a*f-c*d)/(a*e-b*d);
        cout<<"x="<<fixed<<setprecision(2)<<X<<'\n';
        cout<<"y="<<fixed<<setprecision(2)<<Y<<'\n';
    }


    return 0;
}
