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
        return w>o.w;
    }
};
int dis[5050][110];
vector< A > g[5050];
priority_queue<A> st;
A temp;
int main()
{
    int i,j,w,n,m,k,s,a,b,ch=0,ans;
    scanf("%d %d %d",&n,&m,&k);
    while(m--)
    {
        scanf("%d %d %d",&a,&b,&w);
        g[a].push_back({b,w,0});
        g[b].push_back({a,w,0});
    }
    for(i=1; i<=n; i++)
        for(j=0; j<=k; j++)
        {
            dis[i][j]=1<<30;
        }
    dis[1][0]=0;
    st.push({1,0,0});
    while(!st.empty())
    {
        temp = st.top();
        if(!ch&&temp.i==n)
        {
            ch=1;
            ans=dis[n][temp.s];
        }
        if(temp.s==0&&temp.i==n)
        {
            //printf("[%d]",dis[n][0]);
            break;
        }
        st.pop();
        for(auto x:g[temp.i])
        {
            if(dis[x.i][temp.s]> temp.w+x.w)
            {
                dis[x.i][temp.s]= temp.w+x.w;
                st.push({x.i,dis[x.i][temp.s],temp.s});
            }
            if(temp.s<k)
            {
                if(dis[x.i][temp.s+1]> temp.w+x.w/2)
                {
                    dis[x.i][temp.s+1]= temp.w+x.w/2;
                    st.push({x.i,dis[x.i][temp.s+1],temp.s+1});
                }
            }
        }
    }
    printf("%d\n%d\n%d\n",dis[n][0],ans,dis[n][0]-ans);
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
