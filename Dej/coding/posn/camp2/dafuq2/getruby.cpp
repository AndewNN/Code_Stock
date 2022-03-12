/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int tree[800000];
string a;
int main()
{
    int n,m,c,d,ans;
    scanf("%d %d",&n,&m);
    while(m--){
        cin>>a;
        if(a=="Bury"){
            scanf("%d %d",&c,&d);
            while(d<=n)
                tree[d]+=c,d+=(d&-d);
        }
        else if(a=="Find"){
            scanf("%d %d",&c,&d);
            for(ans=0;d>0;d-=(d&-d))
                ans+=tree[d];
            for(c--;c>0;c-=(c&-c))
                ans-=tree[c];
            printf("%d\n",ans);
        }
    }
    return 0;
}
