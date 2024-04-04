#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);

    int n;

    while(cin>>n){

        if(n == 0){
            break;
        }

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }


    return 0;
}
