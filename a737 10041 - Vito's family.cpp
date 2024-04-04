//絕對值相加代入陣列中的中位數，即可求出解若使用平均數，會忽略極//端值的比重，導致求出的解比正解還要大
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(void)
{
    int n,a;
    int g;

    double sum;
    int ss;


    cin>>n;

    for(int k=0;k<n;k++)
    {
       cin>>a;
       int A[1005] = {};

       for(int i=0;i<a;i++)
       {
           cin>>A[i];
       }

       sort(A,A+a);

       int ss = 0;
       for(int i=0;i<a;i++)
       {
            ss += abs(A[i]-A[(a+1)/2-1]);
       }

       cout<<ss<<'\n';

    }




    return 0;
}
