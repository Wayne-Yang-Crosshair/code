#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main(void)
{
    int m,n;
    cin>>m>>n;
    string num[100] = {""};
    string key = "";
    string trans = "";

    for(int i=0;i<m;i++)
    {
        cin>>num[i];
    }

    cin>>key;

    for(int i=m-1;i>=0;i--)
    {

        trans = "";
        int R=0;
        for(int j=n-1;j>=0;j--){

            if(num[i][j] == '1')
            {
                trans += key[n-1 - R];
            }
            else
            {
                trans = key[n-1 - R] + trans;
            }

            R++;
        }
        key = "";
        key = trans;

        int ss=0;
        for(int j=0;j<n;j++)
        {
            if(num[i][j] == '1')
            {
                ss += 1;
            }
        }

        if(ss%2 == 1)
        {
            for(int k=0;k<n/2;k++)
            {
                 char T = key[ (n+1)/2+k ];
                 key[ (n+1)/2+k ] = key[k];
                 key[k] = T;
            }
        }
    }

    cout<<key;





    return 0;
}
