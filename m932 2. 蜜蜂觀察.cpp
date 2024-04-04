#include<iostream>
using namespace std;

int main(void)
{
    char c[25][25]={};
    string s="";
    int X,Y,n,a[105]={};
    cin>>Y>>X>>n;

    for(int i=0;i<Y;i++){
        for(int j=0;j<X;j++){
            cin>>c[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x=0,y=Y-1,sum=0;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(y-1>=0){
                y--;
            }
        }
        if(a[i]==1){
            if(x+1<X){
                x++;
            }
        }
        if(a[i]==2){
            if(y+1<Y && x+1<X){
                y++,x++;
            }
        }
        if(a[i]==3){
            if(y+1<Y){
                y++;
            }
        }
        if(a[i]==4){
            if(x-1>=0){
                x--;
            }
        }
        if(a[i]==5){
            if(y-1>=0 && x-1>=0){
                y--,x--;
            }
        }
        bool yes=false;
        for(int j=0;j<s.length();j++){
            if(s[j]==c[y][x]){
                yes=true;
            }
        }
        if(!yes){
            sum++;
        }

        s+=c[y][x];
    }

    cout<<s<<'\n'<<sum;

    return 0;
}
