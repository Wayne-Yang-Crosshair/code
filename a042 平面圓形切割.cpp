#include<iostream>
using namespace std;

int main(void){

    int n;
    while(cin>>n){
        int sum=2;
        for(int i=1;i<n;i++){
            sum += i*2;
        }
        cout<<sum<<endl;
    }

    return 0;
}
