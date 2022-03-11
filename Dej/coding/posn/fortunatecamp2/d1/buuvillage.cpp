/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int in[51000],out[51000];
int main()
{
    int q,n,m,a,b,sum,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&a,&b);
            in[b]++,out[a]++;
        }
        sum = 0;
        for(i=1;i<=n;i++){
            if(in[i]==out[i]+1) sum++;
            else if(in[i]>out[i]) sum+=2;
        }
        if(sum<2) printf("Yes\n");
        else      printf("No\n");
        memset(in,0,sizeof in);
        memset(out,0,sizeof out);
    }
    return 0;
}
