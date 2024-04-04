#include<iostream>
using namespace std;

int main(void)
{
    int n;
    string s[55]={};
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        string temp=s[0];
        for(int j=0 ;j<=n;j++){
            s[j]=s[j+1];
        }
        s[n-1]=temp;
    }

    for(int i=0;i<n-1;i++){
        cout<<s[i]<<" ";
    }
    cout<<s[n-1];

    return 0;
}
