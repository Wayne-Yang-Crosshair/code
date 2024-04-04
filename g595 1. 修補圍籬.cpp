#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int a[105]={};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0){

            if(i == 0)
            {
                sum += a[1];
            }
            else if(i == n-1)
            {
                sum += a[n-2];
            }

            else
            {
                if(a[i] == 0)
                {
                    if(a[i-1] < a[i+1])
                    {
                        sum += a[i-1];
                    }else
                    {
                        sum += a[i+1];
                    }


                }

            }
        }
    }

    cout<<sum;


    return 0;
}
