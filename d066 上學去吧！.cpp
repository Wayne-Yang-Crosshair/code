#include<iostream>
using namespace std;

int main(void)
{
    int a,b;
    cin>>a>>b;

    if(a == 7){

        if(b<30){
            cout<<"Off School"<<endl;
        }else{
            cout<<"At School"<<endl;
        }

    }else if(a>7 && a<17){
        cout<<"At School"<<endl;

    }else{
        cout<<"Off School"<<endl;
    }


    return 0;
}
