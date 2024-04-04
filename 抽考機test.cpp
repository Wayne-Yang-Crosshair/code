#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define G 8000
#define H 5

using namespace std;

int choose(void){
    string cho;
    getline(cin,cho);
    if(cho[0] == '1'){
        return 1;
    }else if(cho[0] == '2'){
        return 2;
    }else if(cho[0] == '3'){
        return 3;
    }else{
        return 0;
    }
}

int main(void)
{
    srand(time(NULL));//設定時間亂數種子
    system("color 9f");//背景色水藍白字
    char S[256]={};//檔案名稱
    string SSS[G][H]={};//儲存考題
    char b[5000]={};//讀入的字串
    string change;
    string q;//getline bug的擋箭牌
    bool re[G]={};//通過紀錄
    bool Retry[G]={};//暫時性錯題記錄
    bool RETRY[G]={};//永久性錯題記錄
    bool False[G]={};
    bool notice=false;
    printf("Please key in a filename:");
    cin>>S;
    getline(cin,q);
    ifstream ifs;
    ifs.open(S);
    if(!ifs.is_open()){
        cerr<<"Could not open the file-'"
            <<S<<"'"<<'\n';
            system("pause");
            return -1;
    }

    int k=0,y=0;
    bool T1=false,T2=false;

    while(!ifs.eof())
    {
        while(ifs.getline(b,sizeof(b))){
            if(b[0]!='\0'){
                if(y<H){
                    SSS[k][y]=b;

                }

                if(T1 == true){
                    T2=true;
                    y++;
                }else{
                    T1=true;
                    y=1;
                }
            }else{
                if(T1 == true){
                    k++;
                    T1=T2=false;
                }
                y=0;
            }
        }
    }
    if(T1==true){
        k++;
    }

    ifs.close();

    int p=0;
    int sum=0;
    bool yes=false;
    bool retry=false;
    bool save=false;

    printf("1. If you answer all the "
           "questions correctly,\nyou can "
           "choose save them.\n"

           "2. Enter # to exit and "
           "archive.\n"

           "3. Enter ! to mark wrong "
           "content.\n"

           "4. Enter / you can skip the "
           "answer (regarded as correct "
           "answer)\n");
           system("pause");

    string key="";
    while(key != "#"){
        while(sum<k){
            system("cls");
            system("color 9f");
            string type=" ";
            yes=true;
            p=rand()%k;
            if(re[p]){
                while(re[p]){
                    if(p>=k-1){
                        p=0;
                    }else{
                        p++;
                    }
                }
            }
            while(yes){
                if(notice){
                    cout<<"--False---\n";
                    for(int j=0;j<k;j++)
                    {
                        if(False[j]){
                            cout<<SSS[j][0]<<'\n';
                        }
                    }
                    cout<<"----------\n";
                }

                for(int j=0;j<k;j++)
                {
                    if(Retry[j]){
                        cout<<SSS[j][0]<<'\n';
                    }
                }
                cout<<"----------"<<sum
                <<'/'<<k<<'\n';
                if(retry)
                {
                    cout<<SSS[p][0]<<'\n';
                }
                y=1;
                while(SSS[p][y]!="\0"
                        && y<H){
                    cout<<SSS[p][y]<<'\n';
                    y++;
                }

        int L=SSS[p][0].length();

        cout<<'('<<SSS[p][0][0]<<'_';
        bool good=false;
        for(int i=1;i<L-1;i++){
            if(SSS[p][0][i]=='/'){
                cout<<SSS[p][0][i-1]
                <<SSS[p][0][i]
                <<SSS[p][0][i+1]<<'_';
            }else if(SSS[p][0][i]==' '){
                if(!good){
                    good=true;
                    cout<<SSS[p][0][i-1]<<')';
                }
            }else{
                if(good){
                    good=false;
                cout<<'('<<SSS[p][0][i]<<'_';
                }
            }
        }
        if(L>2){
            if(L>4){
                if(SSS[p][0][L-3] == 'i'
                   && SSS[p][0][L-2] == 'n'
                   && SSS[p][0][L-1] == 'g'){
                    cout<<SSS[p][0][L-4]
                    <<SSS[p][0][L-3]
                    <<SSS[p][0][L-2];
                }
            }
            if(L>3){
                if(SSS[p][0][L-2] == 'e'
                   && SSS[p][0][L-1] == 'd'){
                    cout<<SSS[p][0][L-3]
                    <<SSS[p][0][L-2];
                }
            }
            if(SSS[p][0][L-1] == 's'){
                cout<<SSS[p][0][L-2];
            }
        }
        cout<<SSS[p][0][L-1]<<")\n";

                getline(cin,type);
                for(int i=0;i<SSS[p][0].length();i++)
                {
                    if(type[0] == '#')
                    {
                        save=true;
                        break;
                    }else if(type[0] == '!'
                            && retry==true){
                        cout<<SSS[p][0]<<
                        ">>???\n";
                        cin>>change;
                        getline(cin,q);
                        SSS[p][0]=SSS[p][0]+">>"+change;

                        notice=true;
                        False[p]=true;
                        re[p]=true;
                        retry=false;
                        Retry[p]=false;
                        RETRY[p]=false;
                        yes=false;
                        system("color 9f");
                        break;
                    }else if(type[0] == '/'){
                        re[p]=true;
                        retry=false;
                        Retry[p]=false;
                        RETRY[p]=false;
                        yes=false;
                        system("color 9f");
                        break;
                    }else if(type[i]!=SSS[p][0][i])
                    {
                        yes=true;
                        system("color 0f");
                        system("cls");
                        retry=true;
                        Retry[p]=true;
                        RETRY[p]=true;
                        break;
                    }
                    yes=false;
                    system("color 9f");
                }
                if(save){
                    break;
                }
            }
            if(save){
                break;
            }
            if(!retry){
                sum++;
                re[p]=true;
                Retry[p]=false;
            }
            retry=false;

        }

        int cho=0;
        int add=0;
        while(save or sum>=k){
            printf("Please select a list "
                   "storage mode\n"
                   "1.Unfamiliar\n"
                   "2.Wrong\n"
                   "3.Unfinished\n"
                   "!.Correction\n"
                   "K.Continue quiz\n"
                   "R.Reset quiz\n"
                   "#.Quit\n:");
            cin>>key;
            getline(cin,q);
            if(key == "#"){
                break;
            }else if(key == "K"){
                retry=false;
                save=false;
                break;
            }else if(key == "R"){
                retry=false;
                save=false;
                notice=false;
                sum=0;
            memset(re,false,sizeof(re));
            memset(Retry,false,sizeof(Retry));
            memset(RETRY,false,sizeof(RETRY));
            memset(False,false,sizeof(False));
                break;
            }else if(key != "!"){
                printf("0.All\n"
                    "1.Answer only\n"
                    "2.Question only\n");
                cin>>cho;
                getline(cin,q);

                printf("Format\n"
                       "0.No spaces or line "
                       "breaks\n"

                       "1.Spaces but no line "
                       "breaks\n"

                       "2.Line breaks but no "
                       "blank lines\n"

                       "3.Line break and blank "
                       "line\n");
                cin>>add;
                getline(cin,q);
            }

            printf("Save file as:");
            cin>>S;
            getline(cin,q);

            ofstream ofs;
            ofs.open(S);
            if(!ofs.is_open()){
                cout<< "Failed to open file.\n";
                return 1;
            }

            int g=0;
            while(g<k){
                if(key=="1"){
                    if(!re[g]){
                        if(cho==0 || cho==1){
                            ofs<<SSS[g][0];
                            if(add == 1){
                                ofs<<' ';
                            }else if(add == 2
                                ||add == 3){
                                ofs<<'\n';
                            }
                        }
                        if(cho==0 || cho==2){
                            y=1;
                            while(SSS[g][y]!="\0"
                                  && y<H){
                                ofs<<SSS[g][y];
                                if(add == 1){
                                    ofs<<' ';
                                }else if(add == 2
                                    ||add == 3){
                                    ofs<<'\n';
                                }
                                y++;
                            }
                        }
                        if(add == 3){
                            ofs<<'\n';
                        }
                    }
                }
                if(key=="2"){
                    if(RETRY[g]){
                        if(cho==0 || cho==1){
                            ofs<<SSS[g][0];
                            if(add == 1){
                                ofs<<' ';
                            }else if(add == 2
                                ||add == 3){
                                ofs<<'\n';
                            }
                        }
                        if(cho==0 || cho==2){
                            y=1;
                            while(SSS[g][y]!="\0"
                                  && y<H){
                                ofs<<SSS[g][y];
                                if(add == 1){
                                    ofs<<' ';
                                }else if(add == 2
                                    ||add == 3){
                                    ofs<<'\n';
                                }
                                y++;
                            }
                        }
                        if(add == 3){
                            ofs<<'\n';
                        }
                    }
                }
                if(key=="3"){
                    if(!re[g] || RETRY[g]){
                        if(cho==0 || cho==1){
                            ofs<<SSS[g][0];
                            if(add == 1){
                                ofs<<' ';
                            }else if(add == 2
                                ||add == 3){
                                ofs<<'\n';
                            }
                        }
                        if(cho==0 || cho==2){
                            y=1;
                            while(SSS[g][y]!="\0"
                                  && y<H){
                                ofs<<SSS[g][y];
                                if(add == 1){
                                    ofs<<' ';
                                }else if(add == 2
                                    ||add == 3){
                                    ofs<<'\n';
                                }
                                y++;
                            }
                        }
                        if(add == 3){
                            ofs<<'\n';
                        }
                    }
                }
                if(key=="!"){
                    if(False[g]){
                        y=0;
                        while(SSS[g][y]!="\0"
                              && y<H){
                            ofs<<SSS[g][y]<<'\n';
                            y++;
                        }
                        ofs<<g<<"\n\n";
                    }
                }
                g++;
            }
            ofs.close();
        }
    }

    return 0;
}

