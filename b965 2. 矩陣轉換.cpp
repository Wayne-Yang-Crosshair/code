#include<iostream>
using namespace std;

void copy(short a[10][10],short b[10][10],short r, short c)
{

    for(short f=0;f<r;f++)
    {
        for(short d=0;d<c;d++)
        {
            a[f][d] = b[f][d];
        }
    }

}

int main(void)
{
    short r,c,m;
    while(cin>>r>>c>>m)
    {
        short a[10][10]={};
        short b[10][10]={};

        for(short i=0;i<r;i++)
        {
            for(short j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }

        int v[10]={};

        for(short k=0;k<m;k++)
        {
            cin>>v[k];
        }

        for(short k=m-1;k>=0;k--)
        {
            if(v[k] == 0)
            {
                for(short i=0;i<r;i++)
                {
                    for(short j=0;j<c;j++)
                    {
                        b[c-1-j][i] = a[i][j];
                    }
                }
                short temp=r;
                r=c;
                c=temp;

            }

            else if(v[k] == 1)
            {
                for(short i=0;i<r;i++)
                {
                    for(short j=0;j<c;j++)
                    {
                        b[i][j]=a[r-1-i][j];
                    }
                }

            }

            copy(a,b,r,c);
        }

        cout<<r<<" "<<c<<'\n';
        for(short i=0;i<r;i++)
        {
            for(short j=0;j<c;j++)
            {
                cout<<a[i][j];
                if(j < c-1)
                {
                    cout<<" ";
                }
            }
            cout<<'\n';
        }
    }

    return 0;
}
