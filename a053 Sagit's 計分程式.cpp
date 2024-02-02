#include<iostream>
using namespace std;

int test(int n,int sum){

        if(n>40){

            return sum = 100;
        }
        if(n>=21 && n<=40){
            sum += (n%20)*1;
            if(n%20 == 0){
                sum += 20*1;
            }
            n = 20;

        }
        if(n>=11 && n<=20){
            sum += (n%10)*2;
            if(n%10 == 0){
                sum += 10*2;
            }
            n = 10;
        }
        if(n>0 && n<=10){
            sum += (n%10)*6;
            if(n%10 == 0){
                sum += 10*6;
            }
            n = 0;
        }else{
            sum = 0;
        }
        return sum;

}

int main(void){

    int n,sum=0;

    cin>>n;
    cout<<test(n,sum)<<endl;


    return 0;
}
