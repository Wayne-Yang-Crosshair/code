//���D���Ψ�j�ƹB��A�Ȩϥ�long long���D
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
