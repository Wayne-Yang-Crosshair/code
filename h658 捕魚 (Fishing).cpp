#include<iostream>
using namespace std;

int main(void)
{
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    int a[105][105]={{}};

    cin>>a[0][0]>>a[0][1];
    int max = (a[0][0]-x)*(a[0][0]-x)+(a[0][1]-y)*(a[0][1]-y);
    int maxi = 0;

    for(int i=1;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        int t = (a[i][0]-x)*(a[i][0]-x)+(a[i][1]-y)*(a[i][1]-y);
        if(t < max)
        {
            max = t;
            maxi = i;
        }
    }

    cout<<a[maxi][0]<<" "<<a[maxi][1];




    return 0;
}
