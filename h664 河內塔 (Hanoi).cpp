#include<iostream>
using namespace std;


int main(void){

    int ok;
    cin>>ok;
    int a,n;
    int r;

    while(cin>>a>>n){

        string numlist = "";
        while(n>0){
            r = n%2;
            n /= 2;
            numlist += '0'+r;
        }

        int first=0;
        for(int i=0;i<numlist.size();i++){
            if(numlist[i] == '1'){
                first = i+1;
                cout<<first<<endl;
                break;
            }
        }
    }

    return 0;
}
