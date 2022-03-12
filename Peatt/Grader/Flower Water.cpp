/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,idx;
    bool operator < (const A&o)const{
        return i<o.i;
    }
};
struct B{
    int i,j,idx;
    bool operator < (const B&o)const{
        return j<o.j;
    }
};
A aa[100100];
B bb[100100];
int p[100100],ma[100100];
int fr(int u){
    if(u==p[u]) return u;
    else        return p[u]=fr(p[u]);
}
int main()
{
    int n,q,i,j,a,b,l=-1,lp,cou=0,r;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        cou=0;
        for(i=1;i<=n;i++){
            ma[i]=0;
            p[i]=i;
            scanf("%d %d",&a,&b);
            aa[i].i=a,aa[i].j=b;
            bb[i].i=a,bb[i].j=b;
            aa[i].idx=i;
            bb[i].idx=i;
        }
        sort(aa+1,aa+n+1);
        sort(bb+1,bb+n+1);
        for(i=1;i<=n-1;i++){
            if(aa[i].i==aa[i+1].i)
                p[fr(aa[i+1].idx)]=fr(aa[i].idx);
        }
        for(i=1;i<=n-1;i++){
            if(bb[i].j==bb[i+1].j)
                p[fr(bb[i+1].idx)]=fr(bb[i].idx);
        }

        for(i=1;i<=n;i++){
            r=fr(p[i]);
            if(!ma[r])
                cou++;
            ma[r]++;
        }
        printf("%d\n",cou/2+cou%2);
    }
    return 0;
}
/*

2
4
1 2
2 1
2 3
3 2
9
2 1
1 2
2 3
2 5
1 6
2 7
4 3
5 4
4 5

*/
