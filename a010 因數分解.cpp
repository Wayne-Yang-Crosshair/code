#include<iostream>
using namespace std;

int main(void){

    int n,sn;
    cin>>n;
    sn = n;

    for(int i=2;i<=n;i++){
        int num=0;
        while(sn%i == 0){
            sn /= i;
            num += 1;
        }
        if(num>0){
            cout<<i;
            if(num>1){
                cout<<"^"<<num;
            }
            if(sn>i){
                cout<<" * ";
            }
        }
    }
    return 0;
}
