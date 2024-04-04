//電視頻道

#include<iostream>
using namespace std;

int main(void)
{
    int a,b;
    cin>>a>>b;

    cout<<((b+100)-a)%100;

/*不論編號是從2開始還是從11開始，b-a的差值不會改變，所
以可以把編號0~99想成1~100，這樣就可以明確知道有100個頻
道，並且b-a+100的+100是為了解決b-a是負數的問題，再%100
取餘數順便解決b-a+100大於100的問題!
*/
    return 0;
}
