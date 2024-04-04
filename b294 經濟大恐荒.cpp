#include<iostream>
using namespace std;


int main(void)
{
    int n;
    int a[10005] = { };
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum += a[j]*(j+1);
    }
    cout<<sum<<endl;


    return 0;
}
