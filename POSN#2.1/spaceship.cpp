/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int x[12],y[12],z[12],aa[12],bb[12],cc[12],mi=1e9,ma[12],m,n;
void play(int a,int b,int c,int xx,int yy,int zz,int w)
{
    if(a>=n&&b>=n&&c>=n)
    {
        mi=min(mi,w);
        return;
    }
    for(int i=0; i<m; i++)
    {
        if(ma[i])
            continue;
        ma[i]=1;
        play(a+aa[i],b+bb[i],c+cc[i],x[i],y[i],z[i],w+((x[i]-xx)*(x[i]-xx))+((y[i]-yy)*(y[i]-yy))+((z[i]-zz)*(z[i]-zz)));
        ma[i]=0;
    }
}
int main()
{
    int sa,sb,sc,xx,yy,zz;
    scanf("%d %d %d %d %d",&n,&sa,&sb,&sc,&m);
    for(int i=0; i<m; i++)
        scanf("%d %d %d %d %d %d",&x[i],&y[i],&z[i],&aa[i],&bb[i],&cc[i]);
    play(sa,sb,sc,0,0,0,0);
    printf("%d",mi);
    return 0;
}
/*

5
0 0 0
5
60 34 56
0 5 7
90 41 92
1 7 8
24 61 81
6 8 8
41 86 70
5 6 7
46 97 85
9 2 4

*/
