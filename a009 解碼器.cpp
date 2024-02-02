#include<iostream>
using namespace std;


int main(void)
{
    string n;
    getline(cin,n);

    for(int i=0;i<n.length();i++)
    {
        n[i] = n[i]-7;
        cout<<n[i];
    }



    return 0;
}
