#include<iostream>
using namespace std;

int main(void)
{
    int n,a[25][2]={},b[25]={};
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        b[i]=a[i][0]*a[i][0]+a[i][1]*a[i][1];
    }

    int M1=-500,M2=-105,temp=0,I1=0,I2=0;

    for(int i=0;i<n;i++){
        if(M2<b[i]){
            M2=b[i];
            I2=i;
        }
        if(M1<M2){
            temp=I1;
            I1=I2;
            I2=temp;
            temp=M1;
            M1=M2;
            M2=temp;
        }
    }

    cout<<a[I2][0]<<" "<<a[I2][1]<<'\n';

    return 0;
}
