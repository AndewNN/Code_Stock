/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],ma[100100];
int fr(int i)
{
    if(p[i]==i){
        return i;
    }
    return p[i]=fr(p[i]);
}
int main()
{
    int n,m,i,s,sum=0,st,now,cou=0,j;
    scanf("%d %d",&n,&m);
    for(i=1; i<=m; i++)
        p[i]=i;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&s);
        if(s==0)
            sum++;
        else
        {
            scanf("%d",&st);
            ma[st]=1;
        }
        for(j=0; j<s-1; j++)
        {
            scanf("%d",&now);
            ma[now]=1;
            p[fr(st)]=fr(now);
        }
    }
    for(i=1;i<=m;i++){
        if(p[i]==i&&ma[i]==1)
            sum++;
    }
    printf("%d",sum-1);
    return 0;
}
/*

8 7
0
3 1 2 3
1 1
2 5 4
2 6 7
1 3
2 7 4
1 1

*/
