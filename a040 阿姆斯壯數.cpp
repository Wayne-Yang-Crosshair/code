#include<iostream>

using namespace std;

int main(void){

    int n,m;
    while(cin>>n>>m){

        bool can=false;

        for(int i=n;i<=m;i++){

            int t;
            int r;
            int sum = 0;
            int num = 0;

            t=i;
            while(t>0){
                num += 1;
                t /= 10;
            }


            t=i;
            while(t>0){

                r = t%10;
                t /= 10;
                int ss=1;
                for(int j=0;j<num;j++){
                    ss *= r;
                }
                sum += ss;
            }

            if(sum==i){
                can = true;
                cout<<sum<<" ";

            }

        }
        if(!can){
            cout<<"none";
        }

        cout<<endl;

    }

    return 0;
}
