#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void){

    string eng = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string n;
    cin>>n;
    short a=0,b=-1;
    for(short i=0;i<n.length();i++){

        short j=0;

        while(n[i] != eng[j]){
            j++;
        }
        a=j;

        int t=abs(a-b);
        if(b!=-1){
            cout<<t;
        }

        b=a;
    }
    cout<<endl;

    return 0;
}
