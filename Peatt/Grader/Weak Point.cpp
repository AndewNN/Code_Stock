/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int chi[500100],in[500100],ma[500100];
queue<int> qu;
vector<int> q[500100];
int main()
{
    int n,m,i,u,v,t,maxx=-1,idx,cou;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&v);
        q[u].push_back(v);
        q[v].push_back(u);
        in[u]++,in[v]++;
    }
    for(i=1;i<=n;i++)
        if(in[i]==1)
            qu.push(i);
    while(!qu.empty()){
        t=qu.front();
        qu.pop();
        ma[t]++;
        for(auto x:q[t])
        {
            if(ma[x])
                continue;
            chi[x]+=chi[t]+1;
            in[x]--;
            if(in[x]==1)
                qu.push(x);
        }
    }
    if(!ma[m])
    {
        for(i=1;i<=n;i++){
            if(!ma[i]&&i!=m)
                if(maxx<chi[i]){
                    maxx=chi[i];
                    idx=i;
                }
            if(!ma[i]&&i==m)
                for(auto x:q[i]){
                    if(maxx<chi[x]){
                        maxx=chi[x];
                        idx=x;
                    }
                    else if(maxx==chi[x]){
                        idx=min(x,idx);
                    }
                }
        }
    }
    else{
        memset(ma,0,sizeof ma);
        ma[m]=1;
        for(auto y:q[m]){
            qu.push(y);
            cou=0;
            ma[y]=1;
            while(!qu.empty()){
                t=qu.front();
                qu.pop();
                for(auto x:q[t]){
                    if(ma[x])
                        continue;
                    qu.push(x);
                    cou++;
                    ma[x]=1;
                }
            }
            if(maxx<cou){
                idx=y;
            }
            maxx=max(maxx,cou);
        }
    }
    printf("%d\n%d",idx,maxx);
    return 0;
}
/*

12 6
1 2
1 6
1 7
1 12
6 8
6 9
2 3
2 10
10 11
3 4
4 5
5 12

*/
