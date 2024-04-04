#include<iostream>
using namespace std;

int main(void){

    int T;
    string num = "0123456789";
    cin>>T;
    for(short k=0;k<T;k++){
        int sum=1;
        string n;
        cin>>n;

        for(short i=0;i<n.length();i++){
            for(short j=0;j<10;j++){
                if(n[i] == num[j]){
                    sum *=  j;
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}
