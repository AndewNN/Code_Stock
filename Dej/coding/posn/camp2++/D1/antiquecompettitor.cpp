/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int l,r,num;
    bool operator < (const A&o) const{
        return r < o.r;
    }
};
vector<A> block[320];
int ans[100007],CNT[100007],num[100007];
int main()
{
    int n,k,q,a,b,i,j;
    scanf(" %d %d %d",&n,&k,&q);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=1;i<=q;i++){
        scanf(" %d %d",&a,&b);
        a--; b--;
        block[a/317].push_back({a,b,i});
    }
    for(i=0;i<320;i++){
        if(block[i].size() == 0) continue;
        sort(block[i].begin(),block[i].end());
        int l,r,cnt=0;
        for(j=block[i][0].l;j<=block[i][0].r;j++){
            CNT[num[j]]++;
            if(CNT[num[j]]==k) cnt++;
        }
        l = block[i][0].l,r=block[i][0].r;
        ans[block[i][0].num] = cnt;
        for(j=1;j<block[i].size();j++){
            while(l<block[i][j].l){
                CNT[num[l]]--;
                if(CNT[num[l]]==k-1) cnt--;
                l++;
            }
            while(l>block[i][j].l){
                l--;
                CNT[num[l]]++;
                if(CNT[num[l]]==k) cnt++;
            }
            while(r<block[i][j].r){
                r++;
                CNT[num[r]]++;
                if(CNT[num[r]]==k) cnt++;
            }
            ans[block[i][j].num]=cnt;
        }
        memset(CNT,0,sizeof CNT);
    }
    for(i=1;i<=q;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
