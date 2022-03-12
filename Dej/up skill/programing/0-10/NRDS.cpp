#include<bits/stdc++.h>
using namespace std;
int ans[1000],cou=1;
void p(int len,int last,int sum,int state){
    int i;
    if(state == len){
        ans[cou]=sum;
        cou++;
        return;
    }
    if(9-last<len-state){
        return;
    }
    for(i=last+1;i<=9;i++){
        p(len,i,sum*10+i,state+1);
    }
}
int main()
{
    int q,j;
    long long an;
    for(j=1;j<=9;j++){
        p(j,0,0,0);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%lld",&an);
        if(an >= cou){
            printf("-1\n");
        }else{
            printf("%d\n",ans[an]);
        }
    }
    return 0;
}
