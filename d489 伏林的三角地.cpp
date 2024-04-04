#include<iostream>
using namespace std;

int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;

    double S=(a+b+c)/2.0;

    double p=S*(S-a)*(S-b)*(S-c);

    cout<<(int)p<<'\n';

    return 0;
}
