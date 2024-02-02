//別人的解法"string很好用"，可行!

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st,en;
    bool b=true;
    cin>>st>>en;
    for(int i=st;i<=en;i++){
        int sum=0;
        for(int j=0;j<to_string(i).length();j++){
            sum+=pow((to_string(i)[j]-'0'),to_string(i).length());
        }
        if(sum==i){
            cout<<i<<" ";
            b=false;
        }
    }
    if(b){
        cout<<"none";
    }

}
