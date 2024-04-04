#include<iostream>
using namespace std;

int main(void)
{
    short n,m,k;
    cin>>n>>m>>k;

    bool b[105][105] = {};
    bool c[105][105] = {};
    bool d[105][105] = {};
    int a[505][5]={};

    for(short r=0;r<k;r++)
    {
        cin>>a[r][0]>>a[r][1]>>a[r][2]>>a[r][3];
        a[r][4] = 1;
    }

    short ks = k;

    while(ks>0)
    {
        for(short r=0;r<k;r++)
        {


            if(a[r][4] == 1)
            {
                if( ! b[ a[r][0] ][ a[r][1] ])
                {
                    d[ a[r][0] ][ a[r][1] ] = true;
                    a[r][0] += a[r][2];
                    a[r][1] += a[r][3];

                }else{
                    c[ a[r][0] ][ a[r][1] ] = true;
                    a[r][4] = 0;
                    ks--;
                }

                if(a[r][0]>=n || a[r][0]<0 ||
                    a[r][1]>=m || a[r][1]<0)
                {
                    a[r][4] = 0;
                    ks--;
                }


            }
        }

        for(short i=0;i<n;i++)
        {
            for(short j=0;j<m;j++)
            {
                if(d[i][j])
                {
                    b[i][j] = true;
                    d[i][j] = false;
                }

                if(c[i][j])
                {
                    b[i][j] = false;
                    c[i][j] = false;
                }
            }
        }



    }

    int ans=0;

    for(short i=0;i<n;i++)
    {
        for(short j=0;j<m;j++)
        {
            if(b[i][j])
            {
                ans++;
            }
        }
    }

    cout<<ans;

    return 0;
}
