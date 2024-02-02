//已通關
#include<iostream>
#include<string>
using namespace std;


int main(void){

    int n;
    int r;

    while(cin>>n){

        string numlist = "";
        while(n>0){
            r = n%2;
            n /= 2;
            numlist +='0'+r;
            //numlist += to_string(r);
            /*numlist += to_string(r);其實是可以的
            只是codeblocks不認得to_string()...
            to_string是一個可以將一個int轉換成char的媒介
            */
        }

        for(int i=0;i<numlist.size();i++){
            cout<<numlist[numlist.size()-i-1];
        }
        cout<<endl;
    }

    return 0;
}
