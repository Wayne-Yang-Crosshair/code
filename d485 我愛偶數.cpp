//我愛偶數
#include<iostream>
using namespace std;

int main(void)
{
    unsigned long long a,b;

    cin>>a>>b;

    cout<<(((b-a+1)%2)*( (b%2)*((b-a)/2)+((b+1)%2)*((b-a)/2+1) ) )+(((b-a)%2)*((b-a+1)/2));


//究極寫法，將判別式直接帶進去cout中
//abs(((b-a)+(a%2==0)+(b%2==0))/2)

    return 0;
}
