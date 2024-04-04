#include<iostream>
using namespace std;


int main(void)
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int en;
    int r;
    cin>>en>>r;

    int b[r];
    for(int i=0;i<r;i++)
    {
        cin>>b[i];
    }


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i] == a[j])
            {
                int temp = a[j];
                a[j] = en;
                en = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}
