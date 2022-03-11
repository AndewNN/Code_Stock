/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int u,v,w;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
priority_queue<A> hp;
int pp[3010],ee[500500][2],dp[1000100],ll[500500];
int fr(int u){
    if(u==pp[u]) return u;
    else        return pp[u]=fr(pp[u]);
}
A tt;
int main()
{
    int i,j,b,e,s,t,l,r,p,c,d;
    long long sum=0;
    scanf("%d %d",&b,&e);
    for(i=1;i<=b;i++)
        pp[i]=i;
    for(i=1;i<=e;i++){
        scanf("%d %d %d %d",&s,&t,&l,&r);
        s++,t++;
        if(r==1)
            pp[fr(s)]=fr(t);
        else
            ee[i][0]=s,ee[i][1]=t,ll[i]=l;
    }
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d %d",&c,&d);
        dp[c]=d;
    }
    for(i=0;i<=1000001;i++)
        if(dp[i]==0)
            dp[i]=1e9;
    for(i=1000000;i>=0;i--){
        dp[i]=min(dp[i],dp[i+1]);
    }
    for(i=1;i<=e;i++)
        hp.push({ee[i][0],ee[i][1],dp[ll[i]]});

    while(!hp.empty())
    {
        tt=hp.top();
        hp.pop();
        if(fr(tt.u)==fr(tt.v))
            continue;
        pp[fr(tt.u)]=fr(tt.v);
        sum+=tt.w;
    }
    printf("%d\n",sum);
    return 0;
}
/*

6 8
0 1 19 0
1 2 50 1
1 3 5 0
2 3 18 0
0 4 32 0
3 4 22 0
2 5 70 0
4 5 20 1
8
5 60
50 200
75 350
20 100
40 145
15 50
35 150
8 60

*/
