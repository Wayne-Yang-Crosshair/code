#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int a[105][2] = {};

    int max=-1,min=-1;
    cin>>a[0][0]>>a[0][1];

    for(int i=1;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        int t =abs(a[i][0]-a[i-1][0])+abs(a[i][1]-a[i-1][1]);
        if(t > max || max == -1)
        {
            max = t;
        }
        if(t < min || min == -1)
        {
            min = t;
        }
    }

    cout<<max<<" "<<min;


    return 0;
}
