//氣泡排序法
#include<iostream>
using namespace std;

int main(void){

    int n,m;
    int a[1005] = {0};
    while(cin>>n){
        for(int k=0;k<n;k++){
            cin>>a[k];
        }

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i]%10 > a[j]%10){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }else if(a[i]%10 == a[j]%10){

                    if(a[i] < a[j]){
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }


            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}









//未完成--二維陣列
/*
int main(void){


    int n,m;
    int a[10][1005]={-1};
    while(cin>>n){

        for(int k=0;k<n;k++){
            cin>>m;
            int len= sizeof(a[m%10]);
            a[m%10][len] = m;
        }

        for(int i=0;i<10;i++){
            for(int j=0;j<sizeof(a[i]);j++){
                if(a[i][j]<a[i][j+1]){
                    int temp=a[i][j];
                    a[i][j] = a[i][j+1];
                    a[i][j+1] = temp;
                }
            }
        }


        for(int i=0;i<10;i++){
            for(int j=0;j<sizeof(a[i]);j++){
                if(a[i][j] != -1){
                    cout<<a[i][j]<<" ";
                }

            }
        }
        cout<<endl;

    }

    return 0;
}
*/
