/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int st[200100],en[200100],sst[200100],sen[200100],p[200100];
struct A{
    int s,h;
    bool operator < (const A&o)const{
        if(h!=o.h)
            return h<o.h;
        return s<o.s;
    }
};
A a[1000100];
int main()
{
    int n,m,k,i,j,s,h,y,maxx,use=0;
    scanf("%d %d %d",&m,&n,&k);
    for(i=1;i<=n;i++){
        st[i]=en[i]=sst[i]=sen[i]=i;
        scanf("%d",&p[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d %d",&s,&h);
        a[i].s=s;
        a[i].h=h;
    }
    scanf("%d",&y);
    sort(a,a+k);
    for(i=0;i<k;i++){
        swap(st[en[a[i].s]],st[en[a[i].s+1]]);
        swap(en[a[i].s],en[a[i].s+1]);
    }
    maxx = p[st[y]];
    for(i=0;i<k;i++){
        swap(sst[sen[a[i].s]],sst[sen[a[i].s+1]]);
        swap(sen[a[i].s],sen[a[i].s+1]);
        if(a[i].h==a[i+1].h)
            continue;
        if(p[st[sen[sst[y]+1]]]>maxx){
            maxx = p[st[sen[sst[y]+1]]];
            use=1;
        }
        if(p[st[sen[sst[y]-1]]]>maxx){
            maxx = p[st[sen[sst[y]-1]]];
            use=1;
        }

    }

    printf("%d\n",maxx);
    printf(use?"USE":"NO");


    return 0;
}
/*

20 5 6
7 5 3 9 4
1 5
1 6
2 10
1 12
3 6
3 13
1

*/
