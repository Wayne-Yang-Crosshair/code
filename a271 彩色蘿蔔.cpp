/*參考11030067@mail.hpsh.tp.edu.tw (和平110級鄧雨珊)
學校 : 臺北市立和平高級中學
編號 : 163096
來源 : [61.64.210.174]
*/

#include<iostream>
#include<sstream>
using namespace std;



int main(void)
{

    int r,x,y,z,w,n,m;
    cin>>r;

    while(r--)
    {
        cin>>x>>y>>z>>w>>n>>m;

        string b;
        cin.ignore();
        getline(cin,b);

        if(b.length()==0)
        {
            cout<<m<<"g\n";
            continue;
        }

        stringstream ss(b);
        int die = 0,c;
        while(ss>>c)
        {
            m -= die;
            if(m<=0)
            {
                cout<<"bye~Rabbit"<<'\n';
                break;
            }
            if(c == 1)
            {
                m += x;
            }
            else if(c == 2)
            {
                m += y;
            }
            else if(c == 3)
            {
                m -= z;
            }
            else if(c == 4)
            {
                m -= w;
                die += n;
            }
            if(m<=0)
            {
                cout<<"bye~Rabbit"<<'\n';
                break;
            }
        }

        if(m>0)
        {
            cout<<m<<"g"<<'\n';
        }


    }


    return 0;
}

/*在一個神奇的國度裡，有一種兔子，它只吃蘿蔔，且每天只吃一個，蘿蔔有四種顏色，分別為：紅蘿蔔，白蘿蔔，黃蘿蔔，發霉的蘿蔔（黑色），兔子吃了蘿蔔之後，體重會有不同的變化，紅蘿蔔吃了胖xg，白蘿蔔吃了胖yg，黃蘿蔔吃了瘦zg(醃黃蘿蔔真難吃...)，發霉的蘿蔔吃了瘦wg(附加狀態：中毒...)，現在給你x,y,z,w問你幾天後，兔子的體重！

p.s.中毒會使兔子每天瘦ng(中毒當天不算),且中毒狀態可累加，m是兔子初始的體重。早上先中毒，晚上才吃東西。

上面的敘述很重要，要仔細看

第一行是測資的筆數，每筆測資第一行是x,y,z,w,n,m，第二行是一串數字，1代表紅蘿蔔，2代表白蘿蔔，3代表黃蘿蔔，4代表黑蘿蔔，0代表沒吃。這一行中的數字為兔子這段時間內所吃的食物。
*/
