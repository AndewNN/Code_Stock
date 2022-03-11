#include<bits/stdc++.h>
using namespace std;
struct A
{
    int i,j,w;
    bool operator < (const A&o) const
    {
        return w < o.w;
    }
};
priority_queue<A> hp;
map<int,int> mp;
int p[50100];
int fin(int i)
{
    if(p[i]==i)
        return i;
    else
        return p[i]=fin(p[i]);
}
int main()
{
    int n,m,i,j,b,c,a,ans=0,q;
    scanf("%d",&q);
    while(q--)
    {
        ans=0;
        scanf("%d %d",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            mp[a] = i;
            p[i] = i;
        }
        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            hp.push({a,b,c});
        }
        while(!hp.empty())
        {
            a = hp.top().i;
            b = hp.top().j;
            c = hp.top().w;
            hp.pop();
            a = mp[a];
            b = mp[b];
            a = fin(a);
            b = fin(b);
            if(a==b)
            {
                ans += c;
            }
            else
            {
                p[a] = b;
            }
        }
        printf("%d\n",ans);
        while(!hp.empty()){
            hp.pop();
        }
        mp.clear();
    }
    return 0;
}
