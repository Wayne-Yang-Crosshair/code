#include<iostream>
using namespace std;


void boom(int a[], int m, int n){

    if(m<n && m>=0){


        if(a[m] == 1){

            a[m] = 0;

        }else if(a[m] == 2 ){

            a[m] = 0;

            boom(a,m+1,n);
            boom(a,m-1,n);

        }else if(a[m]!= 0){

            int t=a[m];
            a[m] = 0;
            boom(a,m+t,n);
            boom(a,m+t*2,n);
            boom(a,m-t,n);
            boom(a,m-t*2,n);



        }else{

            a[m] = 0;
        }


    }

}



int main(void){

    int n,m;
    cin>>n;

    int a[100005]={ };
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }

    cin>>m;

    boom(a,m,n);


    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;


    return 0;
}





/*
void boom(int a[], int m, int n){

    if(a[m] == 1){

        a[m] = 0;

    }else if(a[m] == 2 ){

        a[m] = 0;

        if(a[m+1]!= 0){
            boom(a,m+1,n);
        }

        if(m-1 >= 0){
            if(a[m-1]!= 0){
                boom(a,m-1,n);
            }
        }

    }else{
        int t=a[m];

        if(m+t < n){

            if(a[m+t] != 0){
                boom(a,m+t,n);
            }
        }

        if(m+t*2 < n){

            if(a[m+t*2] != 0){
                boom(a,m+t*2,n);
            }
        }

        if(m-t >= 0){
            if(a[m-t] != 0){
                boom(a,m-t,n);
            }
        }

        if(m-t*2 >= 0){
            if(a[m-t*2] != 0){
                boom(a,m-t*2,n);
            }
        }
        a[m] = 0;


    }

}
*/
