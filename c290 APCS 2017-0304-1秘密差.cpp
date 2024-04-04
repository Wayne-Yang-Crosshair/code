#include<iostream>
#include<stdlib.h>
using namespace std;


int main(void)
{
    string n;
    string num = "0123456789";
    cin>>n;

    int sumA=0,sumB=0;
    for(int i=0;i<n.length();i++)
    {
        for(int j=0;j<10;j++){
            if(n[i] == num[j])
            {
                sumA += j;
                break;
            }
        }
        i++;
        for(int j=0;j<10;j++){
            if(n[i] == num[j])
            {
                sumB += j;
                break;
            }
        }
    }
    int ans =abs(sumA - sumB);
    cout<<ans;

    return 0;
}
