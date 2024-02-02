#include<iostream>
#include<string>
using namespace std;


int main(void){

    string a;
    while(getline(cin,a)){

        bool can=true;

        for(int i=0;i<a.length()/2;i++){
            if(a[i]!=a[a.length()-1-i]){
                can = false;
                break;
            }
        }
        if(can){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}
