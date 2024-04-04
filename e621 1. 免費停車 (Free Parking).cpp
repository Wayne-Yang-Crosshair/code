#include<iostream>
using namespace std;

int main(void){

    int n;
    cin>>n;

    for(int k=0;k<n;k++){
        bool can = true;
        int s,e,x;
        cin>>s>>e>>x;
        for(int i=s+1;i<e;i++){

            if(i%x != 0){
                can = false;
                cout<<i<<" ";
            }

        }
        if(can){
            cout<<"No free parking spaces.";
        }

        cout<<endl;
    }

    return 0;
}
