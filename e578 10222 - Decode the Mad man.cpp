#include<iostream>
#include<string.h>
using namespace std;


int main(void)
{
    string n;

    string list =           "zxcvbnm,./asdfghjkl;'qwertyuiop[]`1234567890-=";//總共47+1-1個，加上空白，減去反斜線\


    while(getline(cin,n)){
        for(int i=0;i<n.length();i++){
            for(int j=0;j<46;j++){
                if(n[i] == list[j]){
                    cout<<list[j-2];
                }
            }
            if(isspace(n[i])){
                cout<<" ";
            }
            if((int)n[i]==92){
                cout<<"[";
            }
        }
        cout<<endl;
    }

    return 0;
}
