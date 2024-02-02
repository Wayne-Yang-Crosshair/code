#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    while (scanf("%d %d %d",&a,&b,&c)!=EOF){
        int D=b*b-4*a*c;
        int d_sqrt=(int)sqrt(D);

        if(D>0){
            printf("Two different roots x1=%d , x2=%d\n",(-b+d_sqrt)/(2*a),(-b-d_sqrt)/(2*a));
        }else if (D==0){
            printf("Two same roots x=%d\n",-b/(2*a));
        }else{
            printf("No real root");
        }
    }
}
