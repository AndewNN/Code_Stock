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
    int i,w,s;
    bool operator<(const A&o)const
    {
        if(w!=o.w)
            return w>o.w;
    }
};
priority_queue<A> hp;
vector<A> g[5050];
A temp;
int dis[5050][110];
int main()
{
    int n,m,k,a,b,t,i,j,ans1,ans2,ch=1;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0; i<=n; i++)
        for(j=0;j<=k;j++)
            dis[i][j]=1<<30;
    while(m--)
    {
        scanf("%d %d %d",&a,&b,&t);
        g[a].push_back({b,t,0});
        g[b].push_back({a,t,0});
    }
    hp.push({1,0,0});
    dis[1][0]=0;
    while(!hp.empty())
    {

        temp=hp.top();
        hp.pop();
        if(temp.i==n&&ch==1)
        {
            ch=0;
            ans1=dis[n][temp.s];
            continue;
        }
        if(temp.i==n&&temp.s==0)
        {
            break;
        }
        for(auto x:g[temp.i])
        {
            if(dis[x.i][temp.s]>dis[temp.i][temp.s]+x.w)
            {
                dis[x.i][temp.s]=dis[temp.i][temp.s]+x.w;
                hp.push({x.i,dis[x.i][temp.s],temp.s});
            }
            if(temp.s+1<=k)
                if(dis[x.i][temp.s+1]>dis[temp.i][temp.s]+x.w/2)
                {
                    dis[x.i][temp.s+1]=dis[temp.i][temp.s]+x.w/2;
                    hp.push({x.i,dis[x.i][temp.s+1],temp.s+1});
                }
        }

    }
    printf("%d\n%d\n%d",dis[n][0],ans1,dis[n][0]-ans1);


    return 0;
}
/*

6 8 1
1 2 4
1 4 2
2 3 4
2 4 6
3 6 6
4 3 12
4 5 10
5 6 4


*/

