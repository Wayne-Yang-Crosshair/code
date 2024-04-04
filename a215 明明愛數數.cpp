#include<iostream>
using namespace std;

int main(void){

    int a,b;

    while(cin>>a>>b){
        int sum=0;
        int i=0;
        while(sum<=b){
            sum += a+i;
            i++;
        }
        if(i==0){
            cout<<"1"<<endl;
        }else{
            cout<<i<<endl;
        }
    }


    return 0;
}
