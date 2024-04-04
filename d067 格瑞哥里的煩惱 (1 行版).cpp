#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    if(n%400 == 0)cout<<"a leap year";
    else if(n%100 == 0)cout<<"a normal year";
    else if(n%4 == 0)cout<<"a leap year";
    else cout<<"a normal year";


    return 0;
}
