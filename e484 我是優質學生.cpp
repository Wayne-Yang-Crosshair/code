#include<iostream>
using namespace std;

int main(void)
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum++;
        }
    }

    if(sum==1){
        cout<<"yes"<<'\n';
    }else if(sum>1){
        cout<<"no"<<'\n';
    }

    return 0;
}
