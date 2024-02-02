#include<iostream>
using namespace std;

int main(void){

    int n,a,b;
    int k=1;
    cin>>n;
    for(int t=0;t<n;t++){
        cin>>a>>b;

        int i=0,sum=0;
        while(i*i<=b){
            if(i*i>=a){
                sum += i*i;
            }
            i++;
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
        k++;
    }

    return 0;
}
