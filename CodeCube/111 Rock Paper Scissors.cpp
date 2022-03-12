/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,ma=-1;
    scanf("%d %d %d",&x,&y,&z);
    if(x+y+z!=100)
        printf("BUG");
    else
    {
        if(x-y>=0&&x-z>=0)
            ma=1;
        if(y-x>=0&&y-z>=0)
            ma=2;
        if(z-y>=0&&z-x>=0)
            ma=3;
        if( (ma==1&&(x==y||x==z)) || (ma==2&&(x==y||y==z)) || (ma==3&&(z==y||x==z)) )
            ma=0;
        if(ma==1)
            printf("PAPER");
        if(ma==2)
            printf("SCISSORS");
        if(ma==3)
            printf("ROCK");
        if(ma==0)
            printf("I DON'T KNOW");
    }

return 0;
}
