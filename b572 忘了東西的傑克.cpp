#include<iostream>
using namespace std;


int main(void){

    int n,h1,m1,h2,m2,time;
    cin>>n;

    for(int k=0;k<n;k++)
    {
        cin>>h1>>m1>>h2>>m2>>time;

        int ans =(m2-m1+60*(h2-h1));
        if(ans >= time){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
