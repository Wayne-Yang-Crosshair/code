#include<iostream>
using namespace std;


int main(void){

    int a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e){
        if(a==0 && b==0 && c==0 && d==0 && e==0){
            break;
        }

        int kk=0;

        for(int i=0;i<=e;i++){

            int sum = a*i*i + b*i + c ;

            if(sum%d == 0){
                kk += 1;
            }

        }
        cout<<kk<<endl;
    }


    return 0;
}
