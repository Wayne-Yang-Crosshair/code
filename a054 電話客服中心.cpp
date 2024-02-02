#include<iostream>
using namespace std;

int main(void){

    string num;
    cin>>num;

    string eng_list = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
    string eng_comp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string num_list = "0123456789";
    short  sum =0;



    for(short i=0;i<9;i++){
        for(short j=0;j<10;j++){
            if(num[i] == num_list[j]){

                sum += j*(8-i);
                if(8-i == 0){

                    sum += j;

                }
                break;
            }
        }

    }
    for(short j=0;j<26;j++){
        for(short i=0;i<26;i++){
            if((eng_comp[j] == eng_list[i]) && (sum + (i+10)/10 +              (i+10)%10*9 )%10 == 0){
                cout<<eng_comp[j];
                break;
            }
        }
    }
    cout<<endl;

    return 0;
}
