#include<iostream>
using namespace std;

bool check(string n,int i,string eng)
{
    for(int g=0;g<52;g++){
        if(n[i] == eng[g])
        {
            return true;
        }
    }

    return false;
}


int main(void)
{

    string n;
    bool t;
    string eng=
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    while(getline(cin,n))
    {

        int sum=0,i=0;
        while(i<n.length())
        {
            //'A'=65,'Z'=90,'a'=97,'z'=122
            t = check(n,i,eng);
            if(t){
                sum += 1;
                while(t)
                {
                    i++;
                    t = check(n,i,eng);

                }
            }else{
                i++;
            }

        }
        cout<<sum<<endl;
    }



    return 0;
}
