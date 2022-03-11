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
    int i,w,s,mx;
    bool operator<(const A&o)const
    {
        return w>o.w;
    }
};
priority_queue<A> st;
vector<A> g[1010];
A temp;
int dis[1010];
int main()
{
    int n,m,i,a,b,w,s,mx,c;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++)
    {
        dis[i]=1<<30;
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&a,&b,&w);
        g[a].push_back({b,w,0,i});
        g[b].push_back({a,w,0,i});
    }
    st.push({1,0,1,1});
    dis[1]=0;
    while(!st.empty())
    {
        temp=st.top();
        printf("%d %d\n",temp.i,temp.w);
        for(i=1;i<=n;i++){
            printf("%d ",dis[i]);
        }
        printf("%d\n");
        st.pop();
        if(temp.i==n)
        {
            if(temp.s%2==0)
            {
                printf("AAAAAA\n");
                printf("%d\n",temp.w);
                c = dis[temp.i];
                mx=temp.mx;
                break;
            }
            if(temp.s%2==1)
                continue;
        }
        for(auto x:g[temp.i])
        {
            if(temp.s+1==n&&(temp.s+1)%2!=0)
            {
                printf("AAAAAAAAAAAAAAAAAA\n");
                break;
            }
            if(dis[x.i]>temp.w+x.w){
                dis[x.i]=temp.w+x.w;
                if(x.mx>temp.mx)
                    mx=x.mx;
                else
                    mx=temp.mx;
                st.push({x.i,dis[x.i],temp.s+1,mx});
            }
        }
    }
    printf("%d %d\n",mx,c);


    return 0;
}
/*

5 10
4 5 7
3 2 1
3 5 5
5 2 5
1 4 6
2 1 1
4 3 7
1 3 7
4 2 4
1 5 8


*/
