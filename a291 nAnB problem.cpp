//幾A幾B，已消耗5小時
#include<iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    char a1;
    while(cin>>a1){
        char a2,a3,a4;
        char o1,o2,o3,o4;
        cin>>a2>>a3>>a4;
        o1 = a1;o2 = a2;o3 = a3;o4 = a4;
        int r;
        cin>>r;
        for(int i=0;i<r;i++)
        {
            o1 = a1;o2 = a2;o3 = a3;o4 = a4;
            char t1,t2,t3,t4;
            cin>>t1>>t2>>t3>>t4;
            char A='0',B='0';
            if(t1 == o1)
            {
                A++,o1=t1=40;
            }
            if(t2 == o2)
            {
                A++,o2=t2=41;
            }
            if(t3 == o3)
            {
                A++,o3=t3=42;
            }
            if(t4 == o4)
            {
                A++,o4=t4=43;
            }
            if(o1 == t2) B++,o1=t2=10;
            else if(o1 == t3) B++,o1=t3=11;
            else if(o1 == t4) B++,o1=t4=12;

            if(o2 == t1) B++,o2=t1=13;
            else if(o2 == t3) B++,o2=t3=14;
            else if(o2 == t4) B++,o2=t4=15;

            if(o3 == t1) B++,o3=t1=16;
            else if(o3 == t2) B++,o3=t2=17;
            else if(o3 == t4) B++,o3=t4=18;

            if(o4 == t1) B++,o4=t1=19;
            else if(o4 == t2) B++,o4=t2=20;
            else if(o4 == t3) B++,o4=t3=21;

            cout<<A<<"A"<<B<<"B"<<'\n';
        }
    }

    return 0;
}
