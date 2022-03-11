#include<bits/stdc++.h>
using namespace std;
vector<int> g[1100];
int mk[1100],cou,m[1100];
void p(int no,int po){
    if(po>0){
    for(auto x:g[no]){
        mk[x] = 1;
        if(po > 0){
            p(x,po-1);
        }
    }
    }
}
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
        m[a] = 1;
        m[b] = 1;
    }
    while(1){
        scanf("%d %d",&a,&b);
        if(a == 0 && b == 0){
            return 0;
        }else{
            mk[a]=1;
            cou = 0;
            p(a,b);
            for(i=0;i<=1000;i++){
                if(mk[i]==0 && m[i]==1){
                    cou++;
                }
            }
            printf("%d\n",cou);
            memset(mk,0,sizeof mk);
        }
    }
}
/*
16
10 15 15 20 20 25 10 30 30 47 47 50 25 45 45 65
15 35 35 55 20 40 50 55 35 40 55 60 40 60 60 65
*/
