#include<iostream>
using namespace std;

int main(void){

    int n;
    while(cin>>n){
        int t = n;
        int r;
        int sum = 0;
        while(t!=0){
            r = t%10;
            t /= 10 ;
            sum = sum*10+r;
        }
        cout<<sum<<endl;

    }
    return 0;
}
