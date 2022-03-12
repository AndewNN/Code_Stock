/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
map<int,int> x,y;
int main()
{
    int n,m,nn,mm,k,i,j,xx,yy;
    scanf("%d %d %d",&n,&m,&k);
    nn=n,mm=m;
    while(k--){
        scanf("%d %d",&xx,&yy);
        if(x[xx]==0){
            nn--;
            x[xx]=1;
        }
        if(y[yy]==0){
            mm--;
            y[yy]=1;
        }
    }
    printf("%d",((nn%25621)*(mm%25621))%25621);
    return 0;
}
