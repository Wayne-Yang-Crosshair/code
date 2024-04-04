#include<iostream>
using namespace std;

int main(void)
{
    int a,b,n,s[105][105]={},sum=0;
    cin>>a>>b>>n;

    for(int i=0;i<n;i++){
        int h=0;
        while(true){
            cin>>s[i][h];
            if(s[i][h]==0){
                break;
            }
            if(s[i][h]<0){
                int j=0;
                while( s[i][j]!=(s[i][h])*(-1) ){
                    j++;
                }
                s[i][j]=0;
            }
            h++;
        }
    }

    for(int i=0;i<n;i++){
        bool yes1=false,yes2=false;
        for(int j=0;j<105;j++){
            if(s[i][j]==a){
                yes1=true;
            }
            if(s[i][j]==b){
                yes2=true;
            }
        }
        if(yes1 && yes2){
            sum++;
        }
    }

    cout<<sum;

    return 0;
}
