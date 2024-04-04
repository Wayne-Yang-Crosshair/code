#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        int a[105]={},m;
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        sort(a,a+m);
        cout<<(a[m-1] - a[0])*2<<'\n';
    }


    return 0;
}
