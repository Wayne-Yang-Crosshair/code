#include<iostream>
using namespace std;


int main(void){

    int n,t,  thr0=0, thr1=0, thr2=0;
    cin>>n;

    for(short k=0;k<n;k++){
        cin>>t;
        if(t%3==0){
            thr0++;
        }
        if(t%3==1){
            thr1++;
        }
        if(t%3==2){
            thr2++;
        }
    }

    cout<<thr0<<" "<<thr1<<" "<<thr2<<endl;

    return 0;
}
