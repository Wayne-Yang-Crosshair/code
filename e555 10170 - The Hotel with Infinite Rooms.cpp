#include<iostream>
using namespace std;

int main(void)
{
    unsigned long long n,m;
    while(cin>>n>>m){

    for(unsigned long long i=n;i<m;i+=n)
    {
        n += 1;
    }
    cout<<n<<'\n';


    }


    return 0;
}
