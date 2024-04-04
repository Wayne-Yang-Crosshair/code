//小電腦跑不太動，但是丟到zerojudge是AC的

#include<iostream>
using namespace std;

int main(void)
{


    bool b[9] = { };
    bool c[9] = { };

    int n;
    cin>>n;

    int a[305] = { };
    for(int L=0;L<n;L++){
        cin>>a[L];
    }

    int can=0;
    int sum=0;
    int k=0;
    while(k<n && can<9){
        if(a[k] != -1){

            if( ! b[a[k]-1] ){
                b[a[k]-1] = true;
                c[a[k]-1] = true;
                can++;
            }

        }

        if(k>=12){

            if(b[a[k-12]-1] && a[k-12] != -1){
                b[a[k-12]-1] = false;
                can--;
            }

        }
        k++;
    }

    if(can>=9){
        cout<<"perfect"<<endl;
    }else{
        if(k>=n){
            for(int i=0;i<9;i++){
                if(c[i]){
                    sum += i+1;
                }
            }
            cout<<sum<<endl;
        }
    }




    return 0;
}
