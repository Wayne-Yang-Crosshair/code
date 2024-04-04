#include<iostream>
using namespace std;


int main(void){
    int n,u=0,day;
    int a[30] = { };
    while(cin>>n){
        if(n != 0){
            a[u] = n;
            u++;

        }else{
            cin>>day;
            break;
        }
    }
    for(int i=0;i<day;i++){
        int sum[30] = { };
        for(int j=0;j<u;j++){
            if(j!=0 && j!=u-1){
                if(a[j]>a[j+1]){
                    sum[j+1] += (a[j]*0.05)/1;
                }
                if(a[j]>a[j-1]){
                    sum[j-1] += (a[j]*0.05)/1;
                }
            }
            if(j==0){
                if(a[j]>a[j+1]){
                    sum[j+1] += (a[j]*0.1)/1;
                }
            }
            if(j==u-1){
                if(a[j]>a[j-1]){
                    sum[j-1] += (a[j]*0.1)/1;
                }
            }
        }
        for(int j=0;j<u;j++){
            a[j] += sum[j];
        }
    }
    for(int j=0;j<u;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;


    return 0;
}
