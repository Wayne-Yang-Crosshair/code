//�q���W�D

#include<iostream>
using namespace std;

int main(void)
{
    int a,b;
    cin>>a>>b;

    cout<<((b+100)-a)%100;

/*���׽s���O�q2�}�l�٬O�q11�}�l�Ab-a���t�Ȥ��|���ܡA��
�H�i�H��s��0~99�Q��1~100�A�o�˴N�i�H���T���D��100���W
�D�A�åBb-a+100��+100�O���F�ѨMb-a�O�t�ƪ����D�A�A%100
���l�ƶ��K�ѨMb-a+100�j��100�����D!
*/
    return 0;
}
