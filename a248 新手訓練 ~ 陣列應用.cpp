#include<iostream>
using namespace std;

int main(void)
{
    cin.sync_with_stdio(0);
    cin.tie(nullptr);

    int a,b,N;
    while(cin>>a>>b>>N){
            cout<<a/b<<'.';
        for(int i=0;i<N;i++){
            a%=b;
            a*=10;
            cout<<a/b;
        }
        cout<<'\n';
    }

    return 0;
}
