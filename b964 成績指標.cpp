#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    int a[10005] = {};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int min=-1,ok=120;
    for(int i=0;i<n;i++)
    {
        if(a[i] < 60 && a[i] > min)
        {
            min = a[i];
        }
        else if(a[i] >=60 && a[i] < ok)
        {
            ok = a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<'\n';

    if(min != -1)
    {
        cout<<min<<'\n';
    }else
    {
        cout<<"best case"<<'\n';
    }

    if(ok != 120)
    {
        cout<<ok<<'\n';
    }else
    {
        cout<<"worst case"<<'\n';
    }


    return 0;
}
