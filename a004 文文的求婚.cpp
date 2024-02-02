#include<iostream>
using namespace std;

int main(void){

    int n;
    while(cin>>n){

        if (n%4==0) {
            if(n%100==0){
                if(n%400==0){
                    cout<<"閏年"<<endl;
                }
                else{
                cout<<"平年"<<endl;
                }
            }
            else{
                cout<<"閏年"<<endl;
            }
        }else{
            cout<<"平年"<<endl;
        }
    }
    return 0;
}
