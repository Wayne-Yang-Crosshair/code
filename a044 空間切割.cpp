#include<iostream>
using namespace std;

int main(void){

    int n;
    while(cin>>n){

        int t = ((n+1)*((n*n)-n+6))/6;
        cout<<t<<endl;
    }
    return 0;
}
