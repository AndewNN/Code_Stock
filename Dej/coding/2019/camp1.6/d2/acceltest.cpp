#include<bits/stdc++.h>
using namespace std;
struct A{
    int a,b,c;
    bool operator < (const A & o) const{
        if(a!=o.a) return a < o.a;
        else if(b!=o.b) return b < o.b;
        else return c < o.c;
    }
};
A x[100100];
int main()
{
    int n,i,a,b,c,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i].a,&x[i].b,&x[i].c);
    }
    sort(x,x+n);
    for(i=1;i<n;i++){
        ans += min(abs(x[i].a-x[i-1].a),min(abs(x[i].b-x[i-1].b),abs(x[i].c-x[i-1].c)));
    }
    printf("%d\n",ans);
    return 0;
}
