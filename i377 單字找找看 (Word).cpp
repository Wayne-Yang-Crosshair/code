/*
左上方
3 3
caa
aba
aaa
abc

正上方
3 3
aca
aba
aaa
abc

右上方
3 3
aac
aba
aaa
abc

正左方
3 3
cba
aaa
aaa
abc


正右方
3 3
abc
aaa
aaa
abc

左下方
3 3
aaa
aba
caa
abc

正下方
3 3
aaa
aba
aca
abc

右下方
3 3
aaa
aba
aac
abc
*/



#include<iostream>
using namespace std;

bool V(char C[80][80], string ss, short I, short J, short A, short B, char ix, char jx)
{
    string n;
    short i=I, j=J;
    n = "";
    while(true)
    {
        n +=  C[i][j];

        if(ix == '+'){
            i++;
            if(i>A)
            {
                break;
            }
        }else if(ix == '-'){
            i--;
            if(i<A)
            {
                break;
            }
        }
        if(jx == '+'){
            j++;
            if(j>B)
            {
                break;
            }
        }else if(jx == '-'){
            j--;
            if(j<B)
            {
                break;
            }
        }

    }
    if(n == ss){
        cout<<I+1<<" "<<J+1<<'\n'<<A+1<<" "<<B+1;
        return true;
    }else{
        return false;
    }
}

int main(void)
{
        short r,c;

        cin>>r>>c;

        char C[80][80] = {};
        for(short i=0;i<r;i++)
        {
            for(short j=0;j<c;j++)
            {
                cin>>C[i][j];
                if(C[i][j] >= 65 && C[i][j]<=90)
                {
                    C[i][j] += 32;
                }
            }
        }

        string ss;
        cin>>ss;
        short L=ss.length()-1;
        for(short k=0;k<=L;k++)
        {
            if(ss[k] >= 65 && ss[k]<=90)
            {
                ss[k] += 32;
            }
        }

        short I,J;
        bool yes = false;
        for(I=0;I<r;I++)
        {
            for(short J=0;J<c;J++)
            {
                if(C[I][J] == ss[0])
                {

                    if( I-L >=0 && J-L >=0) //左上方
                    {
                        yes = V(C,ss,I,J,I-L,J-L,'-','-');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( I-L >=0 ) //正上方
                    {
                        yes = V(C,ss,I,J,I-L,J,'-','0');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( I-L >=0 && J+L < c) //右上方
                    {
                        yes = V(C,ss,I,J,I-L,J+L,'-','+');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( J-L >=0 ) //正左方
                    {
                        yes = V(C,ss,I,J,I,J-L,'0','-');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( J+L < c ) //正右方
                    {
                        yes = V(C,ss,I,J,I,J+L,'0','+');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( I+L < r && J-L >=0) //左下方
                    {
                        yes = V(C,ss,I,J,I+L,J-L,'+','-');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( I+L < r ) //正下方
                    {
                        yes = V(C,ss,I,J,I+L,J,'+','0');
                        if(yes)
                        {
                            break;
                        }
                    }

                    if( I+L < r && J+L < c) //右下方
                    {
                        yes = V(C,ss,I,J,I+L,J+L,'+','+');
                        if(yes)
                        {
                            break;
                        }
                    }

                }

                if(yes)
                {
                    break;
                }
            }

             if(yes)
            {
                break;
            }
        }

        if(!yes)
        {
            cout<<"NO";
        }



    return 0;
}
