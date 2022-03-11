/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[20];
void p(int x){
    if(x==1){
        printf("January");
    }else if(x==2){
        printf("February");
    }else if(x==3){
        printf("March");
    }else if(x==4){
        printf("April");
    }else if(x==5){
        printf("May");
    }else if(x==6){
        printf("June");
    }else if(x==7){
        printf("July");
    }else if(x==8){
        printf("August");
    }else if(x==9){
        printf("September");
    }else if(x==10){
        printf("October");
    }else if(x==11){
        printf("November");
    }else if(x==12){
        printf("December");
    }
}
int main()
{
    int n,d,e,f,m;
    scanf("%d",&n);
    while(n--){
        scanf(" %s %d",a,&m);
        d = 10*(a[0]-'0')+a[1]-'0';
        e=10*(a[3]-'0')+a[4]-'0';
        f=1000*(a[6]-'0')+100*(a[7]-'0')+10*(a[8]-'0')+a[9]-'0';
        if(d<1 || d>31 || e<1 || e> 12 || f < 1000 || f>3000){
            printf("No\n");
        }else if(m==2){
            printf("%c%c ",a[0],a[1]);
            p(e);
            printf(", %c%c%c%c\n",a[6],a[7],a[8],a[9]);
        }else if(m==3){
            p(e);
            printf(" %c%c, %c%c%c%c",a[0],a[1],a[6],a[7],a[8],a[9]);
        }else if(m==4){
            printf("%c%c ",a[0],a[1]);
            p(e);
            printf(", %c%c\n",a[8],a[9]);
        }
    }
    return 0;
}
