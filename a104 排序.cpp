#include<bits/stdc++.h>
using namespace std;


int main(void){

    int n;
    int a[1005]={0};
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0];
        for(int i=1;i<n;i++){
            cout<<" "<<a[i];
        }
        cout<<endl;
    }

    return 0;
}
