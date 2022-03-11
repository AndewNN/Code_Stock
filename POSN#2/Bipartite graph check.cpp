/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int colo[100100],mark[100100];
int play(int u,int now)
{
    if(mark[u] && colo[u]==now) return 1;
    if(mark[u] && colo[u]!=now) return 0;
    mark[u]=1,colo[u]=now;
    for(auto x: g[u]){
        if(play(x,3-now)==0)
            return 0;
    }
    return 1;
}
int main()
{
    int q,i,n,m,r,s,ch;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        while(m--)
        {
            scanf("%d %d",&r,&s);
            g[r].push_back(s);
            g[s].push_back(r);
        }
        for(i=1,ch=1;i<=n;i++)
        {
            if(mark[i]==0)
            {
                if(play(i,1)==0)
                {
                    ch=0;
                    break;
                }
            }
        }
        printf((ch)?"yes\n":"no\n");
        memset(colo,0,sizeof colo);
        memset(mark,0,sizeof mark);
        for(i=0;i<=n;i++)
            g[i].clear();
    }


    return 0;
}

