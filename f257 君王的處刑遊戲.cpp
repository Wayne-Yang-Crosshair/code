#include<bits/stdc++.h>
using namespace std;


bool check(int x, int y, int n)
{
    if(x>=0 && x<n && y>=0 && y<n)
    {
        return true;
    }else{
        return false;
    }
}


int main(void)
{
    int n,k,x,y;
    while(cin>>n>>k)
    {
        int a[105][105]={};
        bool b[105][105]={};

        for(int i=0;i<k;i++)
        {
            cin>>x>>y;
            if(!b[x][y])
            {
                b[x][y] = true;

                if(check(x-1,y,n))
                {
                    a[x-1][y] += 1;
                }
                if(check(x+1,y,n))
                {
                    a[x+1][y] += 1;
                }
                if(check(x,y-1,n))
                {
                    a[x][y-1] += 1;
                }
                if(check(x,y+1,n))
                {
                    a[x][y+1] += 1;
                }


                if(check(x-1,y-1,n))
                {
                    a[x-1][y-1] += 1;
                }
                if(check(x-1,y+1,n))
                {
                    a[x-1][y+1] += 1;
                }
                if(check(x+1,y-1,n))
                {
                    a[x+1][y-1] += 1;
                }
                if(check(x+1,y+1,n))
                {
                    a[x+1][y+1] += 1;
                }
            }

        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[j][i])
                {
                    cout<<'x';
                }else{
                    cout<<a[j][i];
                }
            }
            cout<<'\n';
        }
    }

    return 0;
}
