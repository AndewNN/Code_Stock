#include<bits/stdc++.h>
using namespace std;
int n,an[20],maa[20],mk[20];
void p(int state){
    int i;
    if(state == n){
        for(i=0;i<n;i++){
            printf("%d ",an[i]);
        }
        printf("\n");
        return ;
    }
    for(i=1;i<=n;i++){
        if(state == 0){
            if(maa[i]!=1){
                mk[i]=1;
                an[state]=i;
                p(state+1);
            mk[i]=0;
            }
        }else{
            if(mk[i]!=0){
                continue;
            }
            mk[i]=1;
            an[state]=i;
            p(state+1);
            mk[i]=0;
        }

    }
}
int main()
{
    int b,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d",&b);
        maa[b] = 1;
    }
    p(0);
    return 0;
}
