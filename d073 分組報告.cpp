#include<iostream>
using namespace std;

int main(void)
{
    int n;

    cin>>n;

    cout<<(n%3==0)*(n/3)+(n%3!=0)*(n/3+1);

    return 0;
}
