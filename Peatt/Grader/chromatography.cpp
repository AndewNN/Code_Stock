/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int fw[1000100];
struct A
{
    int x,i,h,t;
    bool operator < (const A&o)const{
        if(i!=o.i)
            return i>o.i;
        return t<o.t;
    }
};
void upd(int idx,int v){
    while(idx<=1000003){
        fw[idx]+=v;
        idx+=idx&(-idx);
    }
}
int query(int idx){
    int sum=0;
    while(idx>0){
        sum+=fw[idx];
        idx-=idx&(-idx);
    }
    return sum;
}
priority_queue<A> hp;
A tt;
int main()
{
    int n,t,s,h,w,o,i,j,now,l,r,mid,last=0,sum,st,en;
    long long ans=0;
    scanf("%d %d",&n,&t);
    while(n--){
        scanf("%d %d %d %d",&s,&h,&w,&o);
        hp.push({o,s,h,1});
        hp.push({o,s+w,h,-1});
    }
    while(!hp.empty()){
        tt=hp.top();
        hp.pop();
        if(last!=tt.i){
            l=1,r=1000000;
            while(l<r){
                mid=(l+r)/2;
                if(query(mid)>=t)    l=mid+1;
                else                 r=mid;
            }
            en=l;
            l=1,r=1000000;
            while(l<r){
                mid=(l+r)/2;
                if(query(mid)>t)    l=mid+1;
                else                 r=mid;
            }
            st=l;
            ans+=(long long )(en-st)*(tt.i-last);
            last=tt.i;
//            for(int i=1;i<=4;i++){
//                printf("%d ",query(i));
//            }
//            printf("\n");
            //printf("\n%d %d %d %d\n",tt.i,st,en,ans);
        }
        upd(1,tt.x*tt.t);
        upd(tt.h+1,-tt.x*tt.t);
    }
    printf("%lld",ans);
    return 0;
}
/*

3 3
1 1 4 1
2 2 2 2
3 3 1 3

*/
