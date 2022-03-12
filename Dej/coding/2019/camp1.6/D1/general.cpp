#include<bits/stdc++.h>
using namespace std;
int p[100100],k[100100];
int play(int i){
    if(p[i]==i){
        return i;
    }
    return p[i] = play(p[i]);
}
int main()
{
    int n,m,i,a,b,c,d;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&k[i]);
        p[i] = i;
    }
    while(m--){
        scanf("%d %d",&a,&b);
        c = play(a);
        d = play(b);
        if(c == d){
            printf("-1\n");
        }else if(k[c] < k[d]){
            printf("%d",d);
            k[d]+=(k[c]/2);
            p[c] = d;
        }else if(k[c] > k[d]){
            printf("%d\n",c);
            k[c]+=(k[d]/2);
            p[d] = c;
        }else{
            a = min(c,d);
            b = max(c,d);
            printf("%d\n",a);
            k[a] += (k[b]/2);
            p[b] = a;
        }
    }
    return 0;
}
