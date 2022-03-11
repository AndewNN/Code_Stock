/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j;
    bool operator < (const A&o) const{
        return i < o.i;
    }
};
A a[50100];
map<int,int> mp;
int main()
{
    int q,n,i,j,m,mi=1e9,cou=0,l;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d %d",&a[i].i,&a[i].j);
            mp[a[i].j]++;
        }
        m = mp.size();
        sort(a+1,a+n+1);
        mp.clear();
        l = 1;
        cou = 0;
        mi = 1e9;
        for(i=1;i<=n;i++){
            if(!mp[a[i].j]) cou++;
            mp[a[i].j]++;
            while(cou == m){
                mi = min(mi,a[i].i-a[l].i+1);
                mp[a[l].j]--;
                if(!mp[a[l].j]){
                    cou--;
                }
                l++;
            }
        }
        printf("%d\n",mi);
        mp.clear();
    }
    return 0;
}
