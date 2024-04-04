#include<iostream>
using namespace std;

int main(void){

    int n,t,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a[144] = {0};

        cin>>t>>m;
        long long len = t*m ;

        for(int j=0;j<len;j++)
        {
            cin>>a[j];
        }
        bool can=true;
        for(int j=0;j<len/2;j++){
            if(a[j]!=a[len-1-j]){
                can=false;
                break;
            }
        }
        if(can){
            cout<<"go forward"<<endl;
        }else{
            cout<<"keep defending"<<endl;
        }

    }
    return 0;
}
