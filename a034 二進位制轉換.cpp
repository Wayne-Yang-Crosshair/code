//�w�q��
#include<iostream>
#include<string>
using namespace std;


int main(void){

    int n;
    int r;

    while(cin>>n){

        string numlist = "";
        while(n>0){
            r = n%2;
            n /= 2;
            numlist +='0'+r;
            //numlist += to_string(r);
            /*numlist += to_string(r);���O�i�H��
            �u�Ocodeblocks���{�oto_string()...
            to_string�O�@�ӥi�H�N�@��int�ഫ��char���C��
            */
        }

        for(int i=0;i<numlist.size();i++){
            cout<<numlist[numlist.size()-i-1];
        }
        cout<<endl;
    }

    return 0;
}
