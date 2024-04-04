#include<iostream>
using namespace std;

int main(void){

    int n,a,b,cmax=-1,tmax=-1,er=0;
    cin>>n;

    for(int k=0;k<n;k++)
    {
        cin>>a>>b;
        if(b==-1){
            b = 0;
            er++;
        }
        if(cmax == -1){
            cmax = b;
            tmax = a;
        }
        if(b>cmax){
            cmax = b;
            tmax = a;
        }
    }
    int sum=cmax-n-er*2;
    if(sum<0){
        sum =0;
    }
    cout<<sum<<" "<<tmax<<endl;

    return 0;
}
