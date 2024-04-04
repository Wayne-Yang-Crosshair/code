#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(void){

    string n;
    string eng = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while(cin>>n){

        int a[26]={0};
        transform(n.begin(), n.end(), n.begin(), ::toupper);
        for(int i=0;i<n.length();i++){
            for(int j=0;j<26;j++){
                if(n[i] == eng[j]){
                    a[j] += 1;
                }
            }
        }

        bool have=false;
        bool can =true;
        int sum=0;
        for(int i=0;i<26;i++){
            sum += a[i];
            if(a[i]%2 == 1 && !have){
                have = true;
            }else{
                if(a[i]%2 == 1 && have ){
                    cout<<"no..."<<endl;
                    can=false;
                    break;
                }
            }
        }
        if((have && sum%2 == 1 && can)
           || (!have && sum%2 == 0 && can ) ){
            cout<<"yes !"<<endl;
        }else{
            if(can){
                cout<<"no..."<<endl;
            }
        }

    }

    return 0;
}


/*
#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void test03(){
    string str = "AbCdEf";

    參數說明：
        參數1：轉換起始位置；
        參數2：轉換結束位置；
        參數3：轉換之後的起始位置；
        參數4：轉換方式

    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"方法三:大寫轉小寫:"<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<"方法三:小寫轉大寫:"<<str<<endl;

}
int main()
{
    test03();
    return 0;
}
-----------------------------------
©著作权归作者所有：来自51CTO博客作者wx623c6c9b499d6的原创作品，请联系作者获取转载授权，否则将追究法律责任
【一起学习C++】大小写转换
https://blog.51cto.com/u_15567199/5201198
*/
