#include<iostream>
using namespace std;



int main(void){

    int n;
    while(cin>>n){
        int a[100]={0};
        while(n!=0){
            for(short i=0;i<n;i++){
                a[i] = i+1;
            }
            cout<<"Discarded cards: ";
            int t=n;
            while(a[1]!=0){
                cout<<a[0];
                for(short i=1;i<t;i++){
                    a[i-1] = a[i];
                }
                a[t-1] = 0;
                t--;
                if(a[1]!= 0){
                    cout<<", ";
                }


                int temp = a[0];
                for(short i=1;i<t;i++){
                    a[i-1] = a[i];
                }
                a[t-1] = temp;

            }
            cout<<endl;
            cout<<"Remaining card: "<<a[0]<<endl;
            break;
        }
    }

    return 0;
}
