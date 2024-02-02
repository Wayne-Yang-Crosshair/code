#include<iostream>
using namespace std;

int main(void){


    int a,b;

    cin>>a>>b;
    int t =a;
    int m =b;
    while(t != m){
        if(t>m){
            t=t-m;
        }
        if(t<m){
            m=m-t;
        }
    }
    cout<<m<<endl;


    return 0;
}
