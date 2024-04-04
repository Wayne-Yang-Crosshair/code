#include<iostream>
using namespace std;


int main(void)
{
    unsigned long long a,b;
    cin>>a>>b;
    int t=(((a+1)/2)*2+((b/2)*2))*0.5*((b-a)+(a%2==0)+(b%2==0))/2;
    cout<<t;

    return 0;
}
