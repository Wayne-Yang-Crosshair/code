#include<iostream>
using namespace std;

int main(void){

    int n,t;
    int a[1005]={0};
    cin>>t;
    for(int j=0;j<t;j++){

        for(int i=0;i<4;i++){
            cin>>a[i];
        }

        if(a[3]%a[2]==0){
            int b = a[3]/a[2];

            for(int i=0;i<4;i++){
                    cout<<a[i]<<' ';
            }
            cout<<a[3]*b<<endl;

        }else{
            int b = a[3]-a[2];
            for(int i=0;i<4;i++){
                cout<<a[i]<<' ';
            }
            cout<<a[3]+b<<endl;
        }

    }
    return 0;
}
