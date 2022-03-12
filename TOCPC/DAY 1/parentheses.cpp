/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int s1[100100],s2[100100];
vector<int> g[100100];
char o[100100];
void dfs(int u,int p,int st){
    int now=st;
    if(o[u]=='(')
       now++;
    else
        now--;
    if(now<0)    return;
    s1[now]++;
  //  printf("db %d %d %d\n",u,now,p);
    for(auto x:g[u]){
        if(x==p)    continue;
       // printf("pri %d %d\n",u,x);
        dfs(x,u,now);
    }
}
void dfs2(int u,int p,int st){
    int now=st;
    if(o[u]==')')
       now++;
    else
        now--;
    if(now<0)    return;
    s2[now]++;
   // printf("db %d %d %d\n",u,now,p);
    for(auto x:g[u]){
        if(x==p)    continue;
        dfs2(x,u,now);
    }
}
int main()
{
    int n,u,v,ans=0,a,b,i;
    scanf("%d %d %d",&n,&u,&v);
    for(i=0;i<n-1;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    scanf(" %s",o+1);
    dfs(u,u,0);
    dfs2(v,v,0);
    for(i=0;i<=100000;i++)
        ans += s1[i]*s2[i];

    printf("%d",ans);
    return 0;
}
/*

4 8
15 1
10 5
9 3
5 4

*/
