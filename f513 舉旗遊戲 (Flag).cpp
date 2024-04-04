#include<iostream>
using namespace std;

int main(void)
{
    int n,m,ans=0;
    cin>>n>>m;
    int a[105][105]={{}};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        {
            int t=a[x][y];

            if( x==0 && y==0 )
            {
                if(a[x+1][y]!=t && a[x][y+1]!=t &&
                   a[x+1][y+1]!=t)
                   {
                       ans++;
                   }
            }
            else if(x==0 && y==m-1)
            {
                if(a[x+1][y]!=t && a[x][y-1]!=t &&
                   a[x+1][y-1]!=t)
                   {
                       ans++;
                   }
            }
            else if(x==n-1 && y==0)
            {
                if(a[x-1][y]!=t && a[x][y+1]!=t &&
                   a[x-1][y+1]!=t)
                   {
                       ans++;
                   }
            }
            else if(x==n-1 && y==m-1)
            {
                if(a[x-1][y]!=t && a[x][y-1]!=t &&
                   a[x-1][y-1]!=t)
                   {
                       ans++;
                   }
            }





            else if(x==0)
            {
                if(a[x][y+1]!=t && a[x+1][y]!=t &&
                    a[x][y-1]!=t && a[x+1][y-1]!=t &&
                     a[x+1][y+1]!=t)
                {
                    ans++;
                }
            }
            else if(x==n-1)
            {
                if(a[x][y+1]!=t && a[x-1][y]!=t &&
                    a[x][y-1]!=t && a[x-1][y-1]!=t &&
                     a[x-1][y+1]!=t)
                {
                    ans++;
                }
            }
            else if(y==0)
            {
                if(a[x+1][y]!=t && a[x][y+1]!=t &&
                    a[x-1][y]!=t && a[x-1][y+1]!=t &&
                     a[x+1][y+1]!=t)
                {
                    ans++;
                }
            }
            else if(y==m-1)
            {
                if(a[x+1][y]!=t && a[x][y-1]!=t &&
                    a[x-1][y]!=t && a[x+1][y-1]!=t &&
                     a[x-1][y-1]!=t)
                {
                    ans++;
                }
            }


            else if(a[x+1][y]!=t && a[x-1][y]!=t &&
                     a[x][y+1]!=t && a[x][y-1]!=t &&
                      a[x+1][y+1]!=t && a[x+1][y-1]!=t &&
                       a[x-1][y+1]!=t && a[x-1][y-1]!=t)
            {
                ans++;
            }

        }
    }

    cout<<ans;


    return 0;
}
