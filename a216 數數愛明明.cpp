#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(void){

    long long n;
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin>>n){
        cout<<n*(n+1)/2<<" "<<n*(n+1)*(n+2)/6<<endl;
    }



    return 0;
}
