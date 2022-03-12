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
    int i,j,w;
    bool operator < (const A&o) const
    {
        return w > o.w;
    }
};
vector<A> g[110][110];
priority_queue<A> st;
A temp;
int mk[110][110],dis[110][110],di[8]={0,1,1,1,0,-1,-1,-1},dj[8]={1,1,0,-1,-1,-1,0,1};
int a[110][110];
int main()
{
    int q,r,c,i,j,mx,mi,mj,si,sj;
    char o;
    scanf("%d",&q);
    while(q--)
    {
        mx=-1;
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++)
            for(j=0;j<c;j++){
                dis[i][j]=1<<30;
                scanf(" %c",&o);
                if(o=='#')
                    a[i][j]=-1;
                else
                    a[i][j]=o-'0';
                if(o-'0'>mx){
                    mx=o-'0';
                    mi=i,mj=j;
                }
            }
        scanf("%d %d",&si,&sj);
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                if(a[i][j]==-1)
                    continue;
                for(int k=0;k<8;k++){
                    int ii=i+di[k],jj=j+dj[k];
                    if(ii<0||jj<0||ii>=r||jj>=c)
                        continue;
                    g[i][j].push_back({ii,jj,(abs(a[i][j]-a[ii][jj])+1)*(abs(a[i][j]-a[ii][jj])+1)});
                }
            }
        dis[si][sj]=0;
        st.push({si,sj,0});
        while(!st.empty())
        {
          //  printf("dd\n");
            temp=st.top();
            st.pop();
            for(auto x:g[temp.i][temp.j])
            {
                if(dis[temp.i][temp.j]+x.w<dis[x.i][x.j])
                {
                    dis[x.i][x.j]=dis[temp.i][temp.j]+x.w;
                    st.push({x.i,x.j,dis[x.i][x.j]});
                }
            }

        }
        if(dis[mi][mj]==1<<30)
            printf("NO\n");
        else
            printf("%d\n",dis[mi][mj]);
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                g[i][j].clear();
    }

    return 0;
}
/*

2
5 5
11111
1###1
12341
12221
12221
0 0
3 3
1#3
2#3
##4
1 0

*/
