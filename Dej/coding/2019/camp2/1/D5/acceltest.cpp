#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w;
    bool operator < (const A&o) const{
        return w < o.w;
    }
};
struct B{
    int i,j,w;
    bool operator < (const B&o) const{
        return w > o.w;
    }
};
priority_queue<B> hp;
A a[100100],b[100100],c[100100];
int p[100100];
int f(int i){
    if(p[i]==i) return i;
    else        return p[i]= f(p[i]);
}
int main()
{
    int n,i,j,k,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a[i].w,&b[i].w,&c[i].w);
        a[i].i = i;
        b[i].i = i;
        c[i].i = i;
        p[i] = i;
    }
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    for(i=1;i<n;i++){
        j = abs(a[i].w-a[i-1].w);
        hp.push({a[i].i,a[i-1].i,j});
        j = abs(b[i].w-b[i-1].w);
        hp.push({b[i].i,b[i-1].i,j});
        j = abs(c[i].w-c[i-1].w);
        hp.push({c[i].i,c[i-1].i,j});
    }
    while(!hp.empty()){
        i = hp.top().i;
        j = hp.top().j;
        k = hp.top().w;
        hp.pop();
        i = f(i);
        j = f(j);
        if(i!=j){
            ans += k;
            p[i] = j;
        }
    }
    printf("%d\n",ans);
    return 0;
}
