//參考別人的程式碼
#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n,L;

    cin>>n>>L;

    pair <int,int> a[n];

    for(int k=0;k<n;k++){
        cin>>a[k].first>>a[k].second;
    }

    sort(a,a+n);

    long long sum = 0;

    for(int i=0;i<n;i++)
    {
        int l=0,r=L;

        for(int j=i-1;j>=0;j--)
        {
            if(a[i].second > a[j].second
               && a[i].first > a[j].first){

                   l = a[j].first;
                   break;
            }
        }

        for(int j=i+1;j<n;j++)
        {
            if(a[i].second > a[j].second
               && a[i].first < a[j].first){

                   r = a[j].first;
                   break;
            }
        }



        sum += r-l;

    }
    cout<<sum<<endl;

    return 0;
}
