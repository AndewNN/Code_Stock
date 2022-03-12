/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110],mi[110],mj[110];
int main()
{
    int t,q,i,j,ch,r,c;
    scanf("%d",&q);
    for(t=1;t<=q;t++){
        ch = 1;
        scanf("%d %d",&r,&c);
        printf("Case #%d: ",t);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
                mi[i] = max(mi[i],a[i][j]);
                mj[j] = max(mj[j],a[i][j]);
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]<mi[i] && a[i][j] < mj[j]){
                    ch = 0;
                }
            }
        }
    printf((ch)?"YES\n":"NO\n");
    memset(a,0,sizeof a);
    memset(mi,0,sizeof mi);
    memset(mj,0,sizeof mj);
    }
    return 0;
}
