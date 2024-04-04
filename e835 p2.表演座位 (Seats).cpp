#include<iostream>
using namespace std;

void test1(int n){
    int k = n%25;
    int h = n/25+1;
    if(n%25==0){
        k=25;
        h--;
    }
    cout<<h<<" "<<k<<endl;
}

void test2(int n){
    int k = n%50;
    int h = n/50+1;
    if(n%50==0){
        k=50;
        h--;
    }
    cout<<h<<" "<<k<<endl;
}


int main(void){

    int n;

    while(cin>>n){

        if(n<=2500){
            cout<<"1 ";
            test1(n);

        }
        if(n>2500 && n<=7500){
            n -= 2500;
            cout<<"2 ";
            test2(n);
        }
        if(n>7500){
            n -= 7500;
            cout<<"3 ";
            test1(n);
        }

    }

    return 0;
}
