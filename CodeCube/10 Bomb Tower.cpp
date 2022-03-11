/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[500500];
int main()
{
    int a,b,n,m,i,j,cnt=-2;
    scanf("%d %d",&n,&m);
    for(i=4;i<=n;i+=2)
        p[i]=1;
    for(i=3;i<=sqrt(n)+1;i+=2)
            for(j=i*i;j<=n;j+=i)
                p[j]=1;
    for(i=0;i<=n;i++)
        if(p[i]==0)
            cnt++;
    printf((cnt-m>=0)?"%d" : "0",cnt-m);
    return 0;
}
