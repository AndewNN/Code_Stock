 /*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        y=i;
        x=y/100;
        if(x<=3) e+=x;
        y=y%100;
        x=y/10;
        if(x<=3) c+=x;
        else if(x==4) c+=1,d+=1;
        else if(x>4 && x<9) d+=1,c+=x-5;
        else if(x==9) c+=1,e+=1;
        y%=10;
        x=y;
        if(x<=3) a+=x;
        else if(x==4) a+=1,b+=1;
        else if(x>4 && x<9) b+=1,a+=x-5;
        else if(x==9) a+=1,c+=1;
    }
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}
