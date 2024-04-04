#include<iostream>
using namespace std;

void f(int a[],int n)
{
    int b[305]={};

    int k=0,i=0,j=n/2;

    while(k<n)
    {
        b[k]=a[i];
        i++;
        k++;
        if(k>=n)
        {
            break;
        }
        b[k]=a[j];
        j++;
        k++;
        if(k>=n)
        {
            break;
        }
    }

    for(int h=0;h<n;h++)
    {
        a[h]=b[h];
    }
}


int main(void)
{
    int n,m;

    cin>>n>>m;

    int a[305]={};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int w=0;w<m;w++)
    {
        f(a,n);
    }

    for(int w=0;w<n;w++)
    {
        cout<<a[w]<<" ";
    }


    return 0;
}
