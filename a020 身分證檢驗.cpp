#include<iostream>
using namespace std;

int main(void){

    string num;
    cin>>num;

    string eng_list = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
    string num_list = "0123456789";
    short  sum =0;

    for(short i=0;i<26;i++){
        if(num[0] == eng_list[i]){
            sum += (i+10)/10 + (i+10)%10*9;
            break;
        }
    }

    for(short i=1;i<10;i++){
        for(short j=0;j<10;j++){
            if(num[i] == num_list[j]){

                sum += j*(9-i);
                if(9-i == 0){

                    sum += j;

                }
                break;
            }
        }

    }


    if(sum%10 == 0 && sum != 0){
        cout<<"real"<<endl;
    }else{
        cout<<"fake"<<endl;
    }

    return 0;
}
