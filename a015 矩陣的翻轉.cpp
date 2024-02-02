#include<iostream>
using namespace std;

int main(void){

    int n,m;
    while(cin>>n>>m){
        int a[144][144] = {{0},{0}};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                cout<<a[i][j];
                if(i!= n-1){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
