/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int fi[40],di[4]={-1,1,1,-1},dj[4]={-1,-1,1,1};
int main()
{
    int n,x=0,y=0,i;
    fi[1]=fi[2]=1;
    for(i=3;i<40;i++)
        fi[i]=fi[i-1]+fi[i-2];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x+=fi[i]*di[i%4];
        y+=fi[i]*dj[i%4];
    }
    if(y>0)
        printf("%d ",y);
    else
        printf("0 ");
    if(x<0)
        printf("%d ",x*-1);
    else
        printf("0 ");
    if(y<0)
        printf("%d ",y*-1);
    else
        printf("0 ");
    if(x>0)
        printf("%d ",x);
    else
        printf("0 ");
    return 0;
}

