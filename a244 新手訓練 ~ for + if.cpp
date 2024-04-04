//此題為用到大數運算，僅使用long long解題
#include<iostream>
using namespace std;


int main(void){

    int n,a;
    long long b,c;
    cin>>n;

    for(int q=0;q<n;q++){

        long long t;
        cin>>a>>b>>c;
        if(a == 1){
            t = b+c;
        }
        if(a == 2){
            t = b-c;
        }
        if(a == 3){
            t = b*c;
        }
        if(a == 4){
            t = b/c;
        }
        cout<<t<<endl;

    }

    return 0;
}
